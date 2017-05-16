////////////////////////////////////////////////////////////////
// Calculator - Simple calculator realization by patterns
// Copyright (C) 2017 - ? Alexey Konyshev (aleksey.konyshev@gmail.com)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "CommandParser.h"
#include "Calculator.h"
#include "WaitingScreenState.h"
#include "SimpleCommandParserState.h"

#pragma once

class SimpleCommandParser : public CommandParser
{
public:

	SimpleCommandParser();
	
	SimpleCommandParser(Calculator *newCalculator);

	~SimpleCommandParser();

	void setCalculator(Calculator *newCalculator);

	void setState(SimpleCommandParserState *newState);

	/**
	 * @brief Process calcualtion after pushing button Enter. Hovewer it
	 * method used in math sign buttons also
	 * 
	 */
	void pushEnterCalcul();

	/**
	 * @brief Process calculation after pushing buttons +-/*
	 * 
	 */
	void pushSignCalcul();

	void doMathOpWhenEnterCommand();

	void doMathOpWhenSignCommand();
	
	void putResultToScreen();
	
	Calculator *calculator;
	
	SimpleCommandParserState *stateParser;

	void addDigitToDigitList();

	void addDigitToResultList();

private:

	double mathCommandExecute(int numberCommand);

	double mathCommandExecute(int numberCommand, double secondArgument);

};

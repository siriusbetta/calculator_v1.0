////////////////////////////////////////////////////////////
//
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
////////////////////////////////////////////////////////////

#include "MathOpList.h"
#include "DigitsList.h"
#include "StrToDig.h"
#include "CommandParser.h"
#include "Screen.h"
#include "sstream"

#pragma once

/**
 * @brief Abstract class of {@code Calculator}
 * consist abstract methods for execution commands from UI
 * and common methods for all implementations of {@code Calculator}
 * 
 */
class Calculator
{
public:

	virtual void One() = 0;
	virtual void Two() = 0;
	virtual void Three() = 0;
	virtual void Four() = 0;
	virtual void Five() = 0;
	virtual void Six() = 0;
	virtual void Seven() = 0;
	virtual void Eight() = 0;
	virtual void Nine() = 0;
	virtual void Zero() = 0;
	virtual void Plus() = 0;
	virtual void Minus() = 0;
	virtual void Mul() = 0;
	virtual void Div() = 0;
	virtual void Point() = 0;
	virtual void Enter() = 0;
	virtual void Undo() = 0;
	
	/**
	 * @brief Returns result of calculations
	 * 
	 * @return [description]
	 */
	virtual double getResult() = 0;

	/**
	 * @brief Command line parser that calculate inputted numbers and math operations
	 * 
	 * @param newCommandParser Implementation of {@code CommandParser}
	 */
	void setCommandParser(CommandParser *newCommandParser);

	/**
	 * @brief Screen 
	 * 
	 * @param newScrean 
	 */
	void setScreen(Screen *newScrean);


	MathOpList mathOpsList;
	DigitsList digitsList;
	DigitsList resultList;

	/**
	 * Converts string to double
	 */
	StrToDig strToDigconv;
	
	Screen *screen;

	CommandParser *commandParser;
	
	double result;
	
};

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

#include "StdAfx.h"
#include "InitSimpleCommandParserState.h"
#include "EnterSimpleCommandParserState.h"
#include "SignSimpleCommandParserState.h"

InitSimpleCommandParserState::InitSimpleCommandParserState()
{

}

void InitSimpleCommandParserState::setParser(SimpleCommandParser *newSimpleParser)
{
	simpleCommandParser = newSimpleParser;
	
}

void InitSimpleCommandParserState::setCalculator()
{
	calculator = simpleCommandParser->calculator;
}

void InitSimpleCommandParserState::calcul()
{
	
}

void InitSimpleCommandParserState::calculWhenEnterCommand()
{
	if(calculator->mathOpsList.isEmpty())
		return;

	if(calculator->strToDigconv.getSize() > 0)
	{
		putSecondNumber();
		simpleCommandParser->doMathOpWhenEnterCommand();
		simpleCommandParser->setState(&EnterSimpleCommandParserState::Instance());
	}

}

void InitSimpleCommandParserState::calculWhenSignCommand()
{
	if(calculator->strToDigconv.getSize() == 0)
		return;
	
	if(hasFirstPosInNumberList())
	{
		putFirstNumber();
		return;
	}

	putSecondNumber();
		
	simpleCommandParser->setState(&SignSimpleCommandParserState::Instance());
}

void InitSimpleCommandParserState::putFirstNumber()
{
	addDigitToResultList();
}

void InitSimpleCommandParserState::putSecondNumber()
{
	addDigitToDigitList();		
}

bool InitSimpleCommandParserState::hasFirstPosInNumberList()
{
	return calculator->resultList.getLastPos() == 0;
}


bool InitSimpleCommandParserState::hasSecondPosInNumberList()
{
	return calculator->digitsList.size == 1;
}


void InitSimpleCommandParserState::addDigitToDigitList()
{
	calculator->digitsList.addDigit(calculator->strToDigconv.getDouble());
	calculator->strToDigconv.clear();
}

void InitSimpleCommandParserState::addDigitToResultList()
{
	calculator->resultList.addDigit(calculator->strToDigconv.getDouble());
	calculator->strToDigconv.clear();
}
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

#include "StdAfx.h"
#include "SimpleCommandParser.h"
#include "ZeroDivException.h"

SimpleCommandParser::SimpleCommandParser()
{

}

SimpleCommandParser::SimpleCommandParser(Calculator *newCalculator)
{
	calculator = newCalculator;
}

SimpleCommandParser::~SimpleCommandParser()
{

}

void SimpleCommandParser::setCalculator(Calculator *newCalculator)
{
	calculator = newCalculator;
}

void SimpleCommandParser::setState(SimpleCommandParserState *newState)
{
	stateParser = newState;
}

void SimpleCommandParser::pushSignCalcul()
{
	stateParser->calculWhenSignCommand();	
}

void SimpleCommandParser::pushEnterCalcul()
{
	stateParser->calculWhenEnterCommand();
}

void SimpleCommandParser::doMathOpWhenEnterCommand()
{	
	/**
	  * Must be execute last operation.
	  */
	processResultOfMathOp(1);
}

void SimpleCommandParser::doMathOpWhenSignCommand()
{
	/**
	  * Must be execute before last operation. Second from last.
	  */
	processResultOfMathOp(2);
}

void SimpleCommandParser::processResultOfMathOp(int mathOpNumber)
{
	mathCommandExecute(calculator->mathOpsList.getLastPos() - 
		mathOpNumber);
	
	putResultToScreen();
}

void SimpleCommandParser::putResultToScreen()
{
	calculator->screen->clearScreen();
	calculator->screen->typeDouble(calculator->getResult());
}

void SimpleCommandParser::mathCommandExecute(int numberCommand)
{
	/*
	 * TODO in calculator will create a new method getMathOperation()
	*/	 
	mathCommandExecute(numberCommand, calculator->resultList.getLast(), 
		calculator->digitsList.getLast());	
}

void SimpleCommandParser::mathCommandExecute(int numberCommand, double firstArgument, 
																						 double secondArgument)
{
	MathOp *mathOp = calculator->mathOpsList.get(numberCommand);
	mathOp->setFirstArgument(firstArgument);
	mathOp->setSecondArgument(secondArgument);
	mathOp->execute();
	
	calculator->setResult(mathOp->getResult());
}


void SimpleCommandParser::addDigitToDigitList()
{
	calculator->digitsList.addDigit(calculator->strToDigconv.getDouble());
	calculator->strToDigconv.clear();
}

void SimpleCommandParser::addDigitToResultList()
{
	calculator->resultList.addDigit(calculator->strToDigconv.getDouble());
	calculator->strToDigconv.clear();
}




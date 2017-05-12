/**
* Calculator - Simple calculator realization by patterns
* Copyright (C) 2017 - ? Alexey Konyshev (aleksey.konyshev@gmail.com)
*
* This software is provided 'as-is', without any express or implied warranty.
* In no event will the authors be held liable for any damages arising from the use of this software.
*
* Permission is granted to anyone to use this software for any purpose,
* including commercial applications, and to alter it and redistribute it freely,
* subject to the following restrictions:
*
* 1. The origin of this software must not be misrepresented;
*    you must not claim that you wrote the original software.
*    If you use this software in a product, an acknowledgment
*    in the product documentation would be appreciated but is not required.
*
* 2. Altered source versions must be plainly marked as such,
*    and must not be misrepresented as being the original software.
*
* 3. This notice may not be removed or altered from any source distribution.
*
*/

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "SimpleCommandParser.h"

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

void SimpleCommandParser::pushSignCalcul()
{

	stateParser->calcul();
	/**
	if(calculator->resultList.getLastPos() == 0) 
	{
		addDigitToResultList();
		return;
	}
		
	addDigitToDigitList();
	
	MathOp *mathOp = calculator->mathOpsList.get(calculator->mathOpsList.getLastPos() - 2);	 

	
	mathOp->setAB(calculator->a10resultList.getLast(), calculator->digitsList.getLast());
	
	mathOp->execute();
	calculator->result = mathOp->getResult();

	calculator->resultList.addDigit(calculator->getResult());
	calculator->screen->clearScreen();
	calculator->screen->typeDouble(calculator->getResult());
	*/
	
}

void SimpleCommandParser::pushEnterCalcul()
{
	if(calculator->mathOpsList.isEmpty())
	{
		return;
	}

	addDigitToDigitList();
	
	MathOp *mathOp = calculator->mathOpsList.get(calculator->mathOpsList.getLastPos() - 1);	 
	mathOp->setAB(calculator->resultList.getLast(), calculator->digitsList.getLast());
	mathOp->execute();
	calculator->result = mathOp->getResult();

	calculator->resultList.addDigit(calculator->getResult());
	calculator->screen->clearScreen();
	calculator->screen->typeDouble(calculator->getResult());
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

double SimpleCommandParser::mathCommandExecute(int numberCommand)
{
	MathOp *mathOp = calculator->mathOpsList.get(numberCommand);	 
	mathOp->setAB(calculator->resultList.getLast(), calculator->digitsList.getLast());
	mathOp->execute();
	return mathOp->getResult();
}

double SimpleCommandParser::mathCommandExecute(int numberCommand, double secondArgument)
{
	MathOp *mathOp = calculator->mathOpsList.get(numberCommand);	 
	mathOp->setAB(calculator->resultList.getLast(), 1);
	mathOp->execute();
	return mathOp->getResult();
}


void SimpleCommandParser::setState(SimpleCommandParserState *newState)
{
	stateParser = newState;
}
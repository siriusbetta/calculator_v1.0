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
	
	if(isDigitsListEmpty())
	{
		return;
	}
	
	if(calculator->digitsList.getLastPos() < 2) 
	{
		addDigitToResultList();
		return;
	}
		
	addDigitToDigitList();

	pushEnterCalcul();
}

void SimpleCommandParser::pushEnterCalcul()
{
	
	if(isDigitsListEmpty())
	{
		return;
	}

	if(calculator->strToDigconv.getSize() > 0)
	{
		addDigitToDigitList();
	}

	MathOp *mathOp = calculator->mathOpsList.getLast();
	 
	mathOp->setAB(calculator->resultList.getLast(), calculator->digitsList.getLast());
	mathOp->execute();
	calculator->result = mathOp->getResult();
	
	calculator->resultList.addDigit(calculator->getResult());

	//addDigitToResultList();
	calculator->screenClear();
	calculator->addToScreen(calculator->getResult());	
}

bool SimpleCommandParser::isDigitsListEmpty()
{
	return calculator->strToDigconv.getSize() == 0;
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
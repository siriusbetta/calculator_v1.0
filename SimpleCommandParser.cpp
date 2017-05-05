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
	
//	if(isDigitsListEmpty())
//	{
//		return;
//	}
	
	if(calculator->resultList.getLastPos() == 0) 
	{
		addDigitToResultList();
		return;
	}
		
	addDigitToDigitList();

	MathOp *mathOp = calculator->mathOpsList.getLast();
	 
	mathOp->setAB(calculator->resultList.getLast(), calculator->digitsList.getLast());
	mathOp->execute();
	calculator->result = mathOp->getResult();
	
	calculator->resultList.addDigit(calculator->getResult());
	
//	calculator->screenClear();
//	calculator->addToScreen(calculator->getResult());
	//calculator->screenClear();
	//pushEnterCalcul();
}

void SimpleCommandParser::pushEnterCalcul()
{
	
//	if(isDigitsListEmpty())
//	{
//		return;
//	}

	addDigitToDigitList();
	
	MathOp *mathOp = calculator->mathOpsList.getLast();
	 
	mathOp->setAB(calculator->resultList.getLast(), calculator->digitsList.getLast());
	mathOp->execute();
	calculator->result = mathOp->getResult();
	
	calculator->resultList.addDigit(calculator->getResult());

//	calculator->screenClear();
//	calculator->addToScreen(calculator->getResult());	
}

bool SimpleCommandParser::isDigitsListEmpty()
{
	return calculator->digitsList.getLastPos() == 0;
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
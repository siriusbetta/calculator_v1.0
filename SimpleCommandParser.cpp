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
	
	if(calculator->resultList.getLastPos() == 0) 
	{
		addDigitToResultList();
		return;
	}
		
	addDigitToDigitList();
	
	calculator->result = mathCommandExecute(calculator->mathOpsList.getLastPos() - 2);
	
	calculator->resultList.addDigit(calculator->getResult());
	calculator->screen->clearScreen();
	calculator->screen->typeDouble(calculator->getResult());
	
}

void SimpleCommandParser::pushEnterCalcul()
{
	if(calculator->mathOpsList.isEmpty())
	{
		return;
	}

	addDigitToDigitList();
	
	calculator->result = mathCommandExecute(calculator->mathOpsList.getLastPos() - 1);
	
	calculator->resultList.addDigit(calculator->getResult());
	calculator->screen->clearScreen();
	calculator->screen->typeDouble(calculator->getResult());
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

double SimpleCommandParser::mathCommandExecute(int numberCommand)
{
	MathOp *mathOp = calculator->mathOpsList.get(numberCommand);	 
	mathOp->setAB(calculator->resultList.getLast(), calculator->digitsList.getLast());
	mathOp->execute();
	return mathOp->getResult();
}
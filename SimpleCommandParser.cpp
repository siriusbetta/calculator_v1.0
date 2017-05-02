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

void SimpleCommandParser::calcul()
{
	if(!calculator->mathOpsList.isEmpty())
		return;

	calculator->screenClear();
	MathOp *mathOp = calculator->mathOpsList.get(calculator->mathOpsList.getLastPos() - 2);

	mathOp->setAB(calculator->digitsList.get(0), calculator->digitsList.get(1));
	
	mathOp ->execute();
	
	calculator->result = mathOp->getResult();

	calculator->digitsList.removeDigit(calculator->digitsList.getLastPos());
	calculator->digitsList.removeDigit(calculator->digitsList.getLastPos());
	calculator->digitsList.addDigit(calculator->result);

	calculator->screenClear();
	calculator->addToScreen(calculator->getResult());
	//calculator->strToDigconv.addDigitsString(calculator->getResult());

}

void SimpleCommandParser::calculEnter()
{


}
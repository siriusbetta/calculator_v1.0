#include "StdAfx.h"
#include "SimpleCalculator.h"


SimpleCalculator::SimpleCalculator() :
result(0)
{

}

SimpleCalculator::~SimpleCalculator()
{

}

void SimpleCalculator::One()
{
	strToDigconv.addDigitsString("1");
	addToScreen("1");
}

void SimpleCalculator::Two()
{
	strToDigconv.addDigitsString("2");
	addToScreen("2");
}

void SimpleCalculator::Three()
{
	strToDigconv.addDigitsString("3");
	addToScreen("3");
}

void SimpleCalculator::Four()
{
	strToDigconv.addDigitsString("4");
	addToScreen("4");
}

void SimpleCalculator::Five()
{
	strToDigconv.addDigitsString("5");
	addToScreen("5");
}

void SimpleCalculator::Six()
{
	strToDigconv.addDigitsString("6");
	addToScreen("6");
}

void SimpleCalculator::Seven()
{
	strToDigconv.addDigitsString("7");
	addToScreen("7");
}

void SimpleCalculator::Eight()
{
	strToDigconv.addDigitsString("8");
	addToScreen("8");
}

void SimpleCalculator::Nine()
{
	strToDigconv.addDigitsString("9");
	addToScreen("9");
}

void SimpleCalculator::Zero()
{
	strToDigconv.addDigitsString("0");
	addToScreen("0");
}

void SimpleCalculator::Plus()
{
	digitsList.addDigit(strToDigconv.getDouble());
	strToDigconv.clear();
	

	mathOpsList.addOperation(&plusOp);
	addToScreen("+");
}

void SimpleCalculator::Minus()
{
	digitsList.addDigit(strToDigconv.getDouble());
	strToDigconv.clear();
	
	mathOpsList.addOperation(&minusOp);
	addToScreen("-");
}

void SimpleCalculator::Mul()
{
	digitsList.addDigit(strToDigconv.getDouble());
	strToDigconv.clear();
	
	mathOpsList.addOperation(&mulOp);
	addToScreen("*");
}

void SimpleCalculator::Div()
{
	digitsList.addDigit(strToDigconv.getDouble());
	strToDigconv.clear();
	
	mathOpsList.addOperation(&divOp);
	addToScreen("/");
}

void SimpleCalculator::Point()
{
	strToDigconv.addDigitsString(".");
	addToScreen(".");
}

void SimpleCalculator::Enter()
{
	digitsList.addDigit(strToDigconv.getDouble());
	strToDigconv.clear();

	digitsList.setHaedPos();
	mathOpsList.setHeadPos();

	double first;
	
	first = digitsList.get();

	if(digitsList.hasNext())
	 	result = digitsList.get();

	while(mathOpsList.hasNext())
	{

		MathOp *mathOp = mathOpsList.get();
		mathOp->setAB(result, first);
		first = digitsList.get();
		mathOp->execute();
		result = mathOp->getResult();
	}
}

double SimpleCalculator::getResult()
{
	return result;
}

void SimpleCalculator::Undo()
{

}


bool SimpleCalculator::validateCommandLine()
{
	return digitsList.
}
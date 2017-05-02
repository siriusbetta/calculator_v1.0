#include "StdAfx.h"
#include "SimpleCalculator.h"


SimpleCalculator::SimpleCalculator()
{

}

SimpleCalculator::~SimpleCalculator()
{

}

void SimpleCalculator::One()
{
	if(mathOpsList.getLastPos() > 0)
		screenClear();

	strToDigconv.addDigitsString("1");
	addToScreen("1");
}

void SimpleCalculator::Two()
{
	if(mathOpsList.getLastPos() > 0)
		screenClear();

	strToDigconv.addDigitsString("2");
	addToScreen("2");
}

void SimpleCalculator::Three()
{
	if(mathOpsList.getLastPos() > 0)
		screenClear();

	strToDigconv.addDigitsString("3");
	addToScreen("3");
}

void SimpleCalculator::Four()
{
	if(mathOpsList.getLastPos() > 0)
		screenClear();

	strToDigconv.addDigitsString("4");
	addToScreen("4");
}

void SimpleCalculator::Five()
{
	if(mathOpsList.getLastPos() > 0)
		screenClear();

	strToDigconv.addDigitsString("5");
	addToScreen("5");
}

void SimpleCalculator::Six()
{
	if(mathOpsList.getLastPos() > 0)
		screenClear();

	strToDigconv.addDigitsString("6");
	addToScreen("6");
}

void SimpleCalculator::Seven()
{
	if(mathOpsList.getLastPos() > 0)
		screenClear();

	strToDigconv.addDigitsString("7");
	addToScreen("7");
}

void SimpleCalculator::Eight()
{
	if(mathOpsList.getLastPos() > 0)
		screenClear();

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
	if(mathOpsList.getLastPos() > 0)
		screenClear();

	strToDigconv.addDigitsString("0");
	addToScreen("0");
}

void SimpleCalculator::Plus()
{
	
	digitsList.addDigit(strToDigconv.getDouble());
	strToDigconv.clear();

	mathOpsList.addOperation(&plusOp);

	commandParser->calcul();
}

void SimpleCalculator::Minus()
{
	digitsList.addDigit(strToDigconv.getDouble());
	
	strToDigconv.clear();

	mathOpsList.addOperation(&minusOp);

	commandParser->calcul();
}

void SimpleCalculator::Mul()
{
	
	digitsList.addDigit(strToDigconv.getDouble());
	strToDigconv.clear();
	
	mathOpsList.addOperation(&mulOp);
	
	commandParser->calcul();
}

void SimpleCalculator::Div()
{
	digitsList.addDigit(strToDigconv.getDouble());
	strToDigconv.clear();

	mathOpsList.addOperation(&divOp);

	commandParser->calcul();
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
	commandParser->calcul();
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
	return digitsList.getLastPos() - 1 != mathOpsList.getLastPos();
}

bool SimpleCalculator::isFirstOp()
{

	return mathOpsList.getLastPos() == 0;
}
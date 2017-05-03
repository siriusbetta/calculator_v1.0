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

	mathOpsList.addOperation(&plusOp);

	commandParser->pushSignCalcul();
}

void SimpleCalculator::Minus()
{
	mathOpsList.addOperation(&minusOp);

	commandParser->pushSignCalcul();
}

void SimpleCalculator::Mul()
{
	
	mathOpsList.addOperation(&mulOp);
	
	commandParser->pushSignCalcul();
}

void SimpleCalculator::Div()
{

	mathOpsList.addOperation(&divOp);

	commandParser->pushSignCalcul();
}

void SimpleCalculator::Point()
{
	strToDigconv.addDigitsString(".");
	addToScreen(".");
}

void SimpleCalculator::Enter()
{
	
	commandParser->pushEnterCalcul();
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
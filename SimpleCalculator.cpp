#include "StdAfx.h"
#include "SimpleCalculator.h"
#include "WaitingScreenState.h"


SimpleCalculator::SimpleCalculator()
{

}

SimpleCalculator::~SimpleCalculator()
{

}

void SimpleCalculator::One()
{

	strToDigconv.addDigitsString("1");
	screen->state->input("1");
	
}

void SimpleCalculator::Two()
{

	strToDigconv.addDigitsString("2");
	screen->state->input("2");
		
}

void SimpleCalculator::Three()
{
	strToDigconv.addDigitsString("3");
	screen->state->input("3");
	
}

void SimpleCalculator::Four()
{
	strToDigconv.addDigitsString("4");
	screen->state->input("4");
	
}

void SimpleCalculator::Five()
{
	strToDigconv.addDigitsString("5");
	screen->state->input("5");

}

void SimpleCalculator::Six()
{
	strToDigconv.addDigitsString("6");
	screen->state->input("6");
	
}

void SimpleCalculator::Seven()
{
	strToDigconv.addDigitsString("7");
	screen->state->input("7");

}

void SimpleCalculator::Eight()
{
	strToDigconv.addDigitsString("8");
	screen->state->input("8");
}

void SimpleCalculator::Nine()
{
	strToDigconv.addDigitsString("9");
	screen->state->input("9");
}

void SimpleCalculator::Zero()
{
	strToDigconv.addDigitsString("0");
	screen->state->input("0");
}

void SimpleCalculator::Plus()
{
	mathOpsList.addOperation(&plusOp);
	commandParser->pushSignCalcul();
	screen->setState(&WaitingScreenState::Instance());
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
	screen->state->input(".");
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

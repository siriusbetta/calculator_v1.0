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
	addSymbolCommand("1");
}

void SimpleCalculator::Two()
{
	addSymbolCommand("2");
}

void SimpleCalculator::Three()
{
	addSymbolCommand("3");	
}

void SimpleCalculator::Four()
{
	addSymbolCommand("4");	
}

void SimpleCalculator::Five()
{
	addSymbolCommand("5");
}

void SimpleCalculator::Six()
{
	addSymbolCommand("6");
}

void SimpleCalculator::Seven()
{
	addSymbolCommand("7");
}

void SimpleCalculator::Eight()
{
	addSymbolCommand("8");
}

void SimpleCalculator::Nine()
{
	addSymbolCommand("9");
}

void SimpleCalculator::Zero()
{
	addSymbolCommand("0");
}

void SimpleCalculator::Plus()
{
	addOpCommand(&plusOp);
}

void SimpleCalculator::Minus()
{
	addOpCommand(&minusOp);
}

void SimpleCalculator::Mul()
{	
	addOpCommand(&mulOp);
}

void SimpleCalculator::Div()
{
	addOpCommand(&divOp);
}

void SimpleCalculator::Point()
{
	addSymbolCommand(".");
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

void SimpleCalculator::addOpCommand(MathOp *opCommand)
{
	mathOpsList.addOperation(opCommand);
	commandParser->pushSignCalcul();
	screen->setState(&WaitingScreenState::Instance());
}

void SimpleCalculator::addSymbolCommand(std::string symbol)
{
	strToDigconv.addDigitsString(symbol);
	screen->state->input(symbol);
}
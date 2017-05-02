#include "StdAfx.h"
#include "Calculator.h"

void Calculator::setCommandParser(CommandParser *newCommandParser)
{
	commandParser = newCommandParser;
}

void Calculator::addToScreen(std::string symbol)
{
	screen << symbol;
}

void Calculator::addToScreen(double number)
{
	screen << number;
}

std::string Calculator::getScreen()
{
	return screen.str();
}

void Calculator::screenClear()
{
	screen.str(std::string());
	screen.clear();
}
#include "StdAfx.h"
#include "Calculator.h"

void Calculator::addToScreen(std::string symbol)
{
	screen << symbol;
}

std::string Calculator::getScreen()
{
	return screen.str();
}
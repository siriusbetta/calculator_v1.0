#include "StdAfx.h"
#include "Screen.h"

void Screen::setState(ScreenState *newScreenStatew)
{
	state = newScreenStatew;
}

void Screen::typeSymbol(std::string newSymbol)
{
	ss << newSymbol;
}

void Screen::typeDouble(double value)
{
	ss << value;
}

std::string Screen::getScreen()
{
	return ss.str();
}

void Screen::clearScreen()
{
	ss.str(std::string());
	ss.clear();
	size = 0;
}
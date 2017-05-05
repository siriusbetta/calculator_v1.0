#include "StdAfx.h"
#include "InputScreenState.h"

InputScreenState::InputScreenState()
{
	
}

InputScreenState::InputScreenState(Screen *newScreen)
{
	screen = newScreen;
}

InputScreenState::~InputScreenState()
{

}

void InputScreenState::setScreen(Screen *newScreen)
{
	screen = newScreen;
}

void InputScreenState::input(std::string newSymbol)
{
	screen->typeSymbol(newSymbol);
}

void InputScreenState::clear()
{
	screen->clearScreen();
}
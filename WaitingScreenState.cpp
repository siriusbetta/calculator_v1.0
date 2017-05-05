#include "StdAfx.h"
#include "WaitingScreenState.h"

WaitingScreenState::WaitingScreenState()
{

}

WaitingScreenState::WaitingScreenState(Screen *newScreen)
{
	screen = newScreen;
}

void WaitingScreenState::setScreen(Screen *newScreen)
{
	screen = newScreen;
}

void WaitingScreenState::input(std::string newSymbol)
{
	screen->clearScreen();
	screen->setState(&InputScreenState::Instance());
	screen->typeSymbol(newSymbol);
}

void WaitingScreenState::clear()
{
	screen->clearScreen();
}



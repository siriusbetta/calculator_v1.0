#include "Screen.h"
#include "ScreenState.h"
#include "InputScreenState.h"

#pragma once

class WaitingScreenState : public ScreenState
{
public:

	static WaitingScreenState& WaitingScreenState::Instance()
	{
		static WaitingScreenState s;
		return s;
	}
	
	/**
	 * @brief Set new screen
	 * 
	 * @param newScreen [description]
	 */
	void setScreen(Screen *newScrean);
	
	void input(std::string newSymbol);

	void clear();

	Screen *screen;

private:

	/**
	 * @brief Default constructor
	 * 
	 */
	WaitingScreenState();

	/**
	 * @brief Constructor set {@code Screen} * 
	 * @param newScreen 
	 */
	WaitingScreenState(Screen *newScrean);

	WaitingScreenState(WaitingScreenState const&);

	WaitingScreenState &operator = (WaitingScreenState const&);
};
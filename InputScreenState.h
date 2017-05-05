#include "ScreenState.h"
#include "Screen.h"

#pragma once

class InputScreenState : public ScreenState
{
public:
	
	static InputScreenState& InputScreenState::Instance()
	{
		static InputScreenState s;
		return s;
	}

	/**
	 * @brief Set new screen
	 * 
	 * @param newScreen [description]
	 */
	void setScreen(Screen *newScreen);

	void input(std::string newSymbol);

	void clear();
	
	Screen *screen;

private:

	/**
	 * @brief Default constructor
	 * 
	 */
	InputScreenState();

	/**
	 * @brief Constructor set {@code Screen} * 
	 * @param newScreen 
	 */
	InputScreenState(Screen *newScreen);

	InputScreenState( InputScreenState const& );

	InputScreenState &operator = (InputScreenState const&);
	
};
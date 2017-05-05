
#include "string"

#pragma once

class ScreenState
{
public:

	/**
	 * @brief Input new symbol to the screan according current state
	 * 
	 * @param  newSymbol
	 */
	virtual void input(std::string newSymbol) = 0;

	/**
	 * @brief Clear screen according state
	 */
	virtual void clear() = 0;
	
};
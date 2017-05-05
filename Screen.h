#include "string"
#include "sstream"
#include "ScreenState.h"

#pragma once

class Screen
{
public:
	
	void setState(ScreenState *newScreenStatew);

	/**
	 * @brief adds new symbol to the screan
	 * 
	 * @param newSymbol 
	 */
	void typeSymbol(std::string newSymbol);

	/**
	 * @brief get current value of screan
	 *
	 * @return screan
	 */
	std::string getScreen();

	/**
	 * @brief Clear screan variable and set size 0
	 * 
	 */
	void clearScreen();

	std::stringstream ss;
	
	int size;

	ScreenState *state;
};
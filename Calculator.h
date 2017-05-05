/**
 * 
 */
#include "MathOpList.h"
#include "DigitsList.h"
#include "StrToDig.h"
#include "CommandParser.h"
#include "Screen.h"
#include "sstream"

#pragma once

/**
 * @brief Abstract class of {@code Calculator}
 * consist abstract methods for execution commands from UI
 * and common methods for all implementations of {@code Calculator}
 * 
 */
class Calculator
{
public:

	virtual void One() = 0;
	virtual void Two() = 0;
	virtual void Three() = 0;
	virtual void Four() = 0;
	virtual void Five() = 0;
	virtual void Six() = 0;
	virtual void Seven() = 0;
	virtual void Eight() = 0;
	virtual void Nine() = 0;
	virtual void Zero() = 0;
	virtual void Plus() = 0;
	virtual void Minus() = 0;
	virtual void Mul() = 0;
	virtual void Div() = 0;
	virtual void Point() = 0;
	virtual void Enter() = 0;
	virtual void Undo() = 0;
	
	/**
	 * @brief Returns result of calculations
	 * 
	 * @return [description]
	 */
	virtual double getResult() = 0;

	/**
	 * @brief Command line parser that calculate inputted numbers and math operations
	 * 
	 * @param newCommandParser Implementation of {@code CommandParser}
	 */
	void setCommandParser(CommandParser *newCommandParser);

	/**
	 * @brief Screen 
	 * 
	 * @param newScrean 
	 */
	void setScreen(Screen *newScrean);

	/**
	 * @brief Insert inputted symbol to the string which is screen
	 * 
	 * @param symbol
	 */
	//void addToScreen(std::string symbol);

	/**
	 * @brief Insert inputted double number to the string which is screen
	 * 
	 * @param number
	 */
	//void addToScreen(double number);

	/**
	 * @brief Get Screen, which could consist current view of result
	 * 
	 * @return screen string value
	 */
	//std::string getScreen();

	//void screenClear();

	MathOpList mathOpsList;
	DigitsList digitsList;
	DigitsList resultList;

	/**
	 * Converts string to double
	 */
	StrToDig strToDigconv;
	
	Screen *screen;

	CommandParser *commandParser;
	
	double result;
	
//	std::stringstream screen;
};

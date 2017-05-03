#include "CommandParser.h"
#include "Calculator.h"

class SimpleCommandParser : public CommandParser
{
public:

	SimpleCommandParser();
	
	SimpleCommandParser(Calculator *newCalculator);

	~SimpleCommandParser();

	void setCalculator(Calculator *newCalculator);

	/**
	 * @brief Process calcualtion after pushing button Enter. Hovewer it
	 * method used in math sign buttons also
	 * 
	 */
	void pushEnterCalcul();

	/**
	 * @brief Process calculation after pushing buttons +-/*
	 * 
	 */
	void pushSignCalcul();

	Calculator *calculator;

private:

	bool isDigitsListEmpty();

	void addDigitToDigitList();
	void addDigitToResultList();

};

#include "MathOpList.h"
#include "DigitsList.h"
#include "StrToDig.h"
#include "CommandParser.h"
#include "sstream"

#pragma once

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
	virtual double getResult() = 0;

	void setCommandParser(CommandParser *newCommandParser);

	void addToScreen(std::string symbol);
	void addToScreen(double number);

	std::string getScreen();

	void screenClear();

	MathOpList mathOpsList;
	DigitsList digitsList;
	StrToDig strToDigconv;
	
	CommandParser *commandParser;
	
	double result;
	std::stringstream screen;
};

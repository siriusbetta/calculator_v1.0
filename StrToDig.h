#include "string"
#include "sstream"

#pragma once

class StrToDig
{
public:
	
	StrToDig();
	
	~StrToDig();

	void addDigitsString(std::string digString);

	void addDigitsString(double digDouble);
	
	double getDouble();

	void clear();

	std::stringstream ss;
	
};
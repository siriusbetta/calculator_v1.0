#include "string"
#include "sstream"

#pragma once

class StrToDig
{
public:
	
	StrToDig();
	
	~StrToDig();

	void addDigitsString(std::string digString);

	double getDouble();

	void clear();

	std::stringstream ss;
	
};
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

	int getSize();

	std::stringstream ss;

	int size;
	
};
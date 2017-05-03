#include "StdAfx.h"
#include "StrToDig.h"
#include "cstdlib"

StrToDig::StrToDig():size(0)
{

}

StrToDig::~StrToDig()
{

}

void StrToDig::addDigitsString(std::string digString)
{
	ss << digString;
	size++;
}

void StrToDig::addDigitsString(double digDouble)
{
	ss << digDouble;
}

double StrToDig::getDouble()
{
	char *end;
	std::string result = ss.str();
	return strtod(result.c_str(), &end);
}

void StrToDig::clear()
{
	ss.str( std::string() );
	ss.clear();
	size = 0;
}

int StrToDig::getSize()
{
	return size;
}
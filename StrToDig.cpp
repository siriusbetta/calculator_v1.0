#include "StdAfx.h"
#include "StrToDig.h"
#include "cstdlib"

StrToDig::StrToDig()
{

}

StrToDig::~StrToDig()
{

}

void StrToDig::addDigitsString(std::string digString)
{
	ss << digString;
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
}
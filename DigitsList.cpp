#include "StdAfx.h"
#include "DigitsList.h"

DigitsList::DigitsList() :
size(10),
currentPos(0),
lastDigit(0)
{
	digits = new double[size + 1];
}

DigitsList::~DigitsList()
{
	delete[] digits;
}

void DigitsList::addDigit(double newDigit)
{
	if(lastDigit > size) return;

	digits[lastDigit++] = newDigit;
}

void DigitsList::removeDigit(int pos)
{
	if(pos < 0 || pos > lastDigit) return;

	shift(pos);

	lastDigit--;
}

void DigitsList::setHaedPos()
{
	currentPos = 0;
}

double DigitsList::getLast()
{
	return digits[lastDigit];
}

double DigitsList::get()
{
	return digits[currentPos++];
}

double DigitsList::get(int pos)
{
	
	if(pos < 0 || pos > lastDigit) 
		return digits[lastDigit];

	return digits[pos];
}

bool DigitsList::hasNext()
{
	return currentPos < lastDigit;
}

int DigitsList::getLastPos()
{
	return lastDigit;
}

void DigitsList::shift(int pos)
{
	for(int i = pos; i < lastDigit; i++)
	{
		digits[i] = digits[i + 1];
	}
}
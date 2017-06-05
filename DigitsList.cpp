////////////////////////////////////////////////////////////////
// Calculator - Simple calculator realization by patterns
// Copyright (C) 2017 - ? Alexey Konyshev (aleksey.konyshev@gmail.com)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
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
	return digits[lastDigit - 1];
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
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
#include "StrToDig.h"

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
	double result;
	ss >> result;
	return result;
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
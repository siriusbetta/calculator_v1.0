/**
* Calculator - Simple calculator realization by patterns
* Copyright (C) 2017 - ? Alexey Konyshev (aleksey.konyshev@gmail.com)
*
* This software is provided 'as-is', without any express or implied warranty.
* In no event will the authors be held liable for any damages arising from the use of this software.
*
* Permission is granted to anyone to use this software for any purpose,
* including commercial applications, and to alter it and redistribute it freely,
* subject to the following restrictions:
*
* 1. The origin of this software must not be misrepresented;
*    you must not claim that you wrote the original software.
*    If you use this software in a product, an acknowledgment
*    in the product documentation would be appreciated but is not required.
*
* 2. Altered source versions must be plainly marked as such,
*    and must not be misrepresented as being the original software.
*
* 3. This notice may not be removed or altered from any source distribution.
*
*/

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "string"
#include "sstream"
#include "ScreenState.h"

#pragma once

class Screen
{
public:
	
	void setState(ScreenState *newScreenStatew);

	/**
	 * @brief adds new symbol to the screan
	 * 
	 * @param newSymbol 
	 */
	void typeSymbol(std::string newSymbol);

	/**
	 * @brief get current value of screan
	 *
	 * @return screan
	 */
	std::string getScreen();

	/**
	 * @brief Clear screan variable and set size 0
	 * 
	 */
	void clearScreen();

	void typeDouble(double value);

	std::stringstream ss;
	
	int size;

	ScreenState *state;
};
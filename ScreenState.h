////////////////////////////////////////////////////////////
//
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
////////////////////////////////////////////////////////////

#include "string"

#pragma once

class ScreenState
{
public:

	/**
	 * @brief Input new symbol to the screan according current state
	 * 
	 * @param  newSymbol
	 */
	virtual void input(std::string newSymbol) = 0;

	/**
	 * @brief Clear screen according state
	 */
	virtual void clear() = 0;

	
	
};
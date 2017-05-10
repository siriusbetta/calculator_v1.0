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

#ifndef WAITING_SCREEN_STATE_H
#ifndef WAITING_SCREEN_STATE_H


////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "Screen.h"
#include "ScreenState.h"
#include "InputScreenState.h"

#pragma once

/**
 * @brief Implementations of {@code ScreenState}. The class designed as Singletone
 * we must be shue before using the state class that link to {@code Screen} is not NULL
 * so where we initialize the programm we set to states link to the {@code Screen} and can use
 * everywhere state classes  
 */
class WaitingScreenState : public ScreenState
{
public:

	static WaitingScreenState& WaitingScreenState::Instance()
	{
		static WaitingScreenState s;
		return s;
	}
	
	/**
	 * @brief Set new screen
	 * 
	 * @param newScreen [description]
	 */
	void setScreen(Screen *newScrean);
	
	void input(std::string newSymbol);

	void clear();

	Screen *screen;

private:

	/**
	 * @brief Default constructor
	 * 
	 */
	WaitingScreenState();

	/**
	 * @brief Constructor set {@code Screen} * 
	 * @param newScreen 
	 */
	WaitingScreenState(Screen *newScrean);

	WaitingScreenState(WaitingScreenState const&);

	WaitingScreenState &operator = (WaitingScreenState const&);
};

#endif //WAITING_SCREEN_STATE_H
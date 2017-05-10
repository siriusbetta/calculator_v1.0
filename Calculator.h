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

/**
 * Headers
 */
#include "MathOpList.h"
#include "DigitsList.h"
#include "StrToDig.h"
#include "CommandParser.h"
#include "Screen.h"
#include "sstream"

#pragma once

#ifndef CALCULATOR_H
#define CALCULATOR_H

/**
 * @brief  Abstract class of {\code Calculator}
 * @details consist abstract methods for execution commands from UI
 * and common methods for all implementations of {\code Calculator}
 */
class Calculator
{
public:

	/**
	 * @brief executes command {@code OneCommand}
	 */
	virtual void One() = 0;

	/**
	 * @brief executes command {@code TwoCommand}
	 */
	virtual void Two() = 0;

	/**
	 * @brief executes command {@code ThreeCommand}
	 */
	virtual void Three() = 0;

	/**
	 * @brief executes command {@code FourCommand}
	 */
	virtual void Four() = 0;

	/**
	 * @brief executes command {@code FiveCommand}
	 */
	virtual void Five() = 0;

	/**
	 * @brief executes command {@code SixCommand}
	 */
	virtual void Six() = 0;

	/**
	 * @brief executes command {@code SevenCommand}
	 */
	virtual void Seven() = 0;

	/**
	 * @brief executes command {@code EightCommand}
	 */
	virtual void Eight() = 0;

	/**
	 * @brief executes command {@code NineCommand}
	 */
	virtual void Nine() = 0;

	/**
	 * @brief executes command {@code ZeroCommand}
	 */
	virtual void Zero() = 0;

	/**
	 * @brief executes command {@code PlusCommand}
	 */
	virtual void Plus() = 0;

	/**
	 * @brief executes command {@code MinusCommand}
	 */
	virtual void Minus() = 0;

	/**
	 * @brief executes command {@code MulCommand}
	 */
	virtual void Mul() = 0;

	/**
	 * @brief executes command {@code DivCommand}
	 */
	virtual void Div() = 0;

	/**
	 * @brief executes command {@code PointCommand}
	 */
	virtual void Point() = 0;

	/**
	 * @brief executes command {@code EnterCommand}
	 */
	virtual void Enter() = 0;

	/**
	 * @brief executes command {@code UndoCommand}
	 */
	virtual void Undo() = 0;
	
	/**
	 * @brief returns result of calculation
	 */
	virtual double getResult() = 0;

	/**
	 * @brief sets link to the {@code CommandParser} 
	 */
	void setCommandParser(CommandParser *newCommandParser);
 
	/**
	 * @brief sets link to the {@code Screen} 
	 */
	void setScreen(Screen *newScrean);

	MathOpList mathOpsList; /**< List of math operations */
	DigitsList digitsList;  /**< List of digits */
	DigitsList resultList;	/**< List of results of calculations*/
 
	StrToDig strToDigconv; /**< Converts string to double*/
	
	Screen *screen; 	/**< Consists value which user can see on the screan */

	CommandParser *commandParser; /**< Processes queries of math operators */
	
	double result;
	
};

#endif CALCULATOR_H
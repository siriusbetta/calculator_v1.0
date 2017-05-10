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
#include "Command.h"
#include "Calculator.h"

#ifndef NINE_COMMAND_H
#define NINE_COMMAND_H

/**
 * @brief implementations of nine command {@code Command} 
 */
class NineCommand : public Command
{
public:

	/**
	 * @brief A constructor. Sets pointer to the implementation of {@code Calculator}
	 * 
	 * @param newCalc a new {@code Calculator}
	 */
	NineCommand(Calculator *newCalc);
	
	/**
	 * A destructor
	 */
	~NineCommand();

	/**
	 * @brief Executes nine command of {@code Calculator}
	 * @see {@code Calculator::Nine()}
	 */
	void execute();

	Calculator *calculator; /**< pointer to the {@code Calculator} */
	
};

#endif NINE_COMMAND_H
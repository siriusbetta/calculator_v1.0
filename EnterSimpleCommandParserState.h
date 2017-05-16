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

#ifndef ENTERSIMPLECOMMANDPARSERSTATE_H
#define ENTERSIMPLECOMMANDPARSERSTATE_H

#include "SimpleCommandParserState.h"
#include "SimpleCommandParser.h"
#include "Calculator.h"

/**
 * @brief Implentation of SimpleCommandParserState when first number in 
 * @details Implentation of SimpleCommandParserState when first number in DigitsNumber and in 
 * resultList absent. 
 */
class EnterSimpleCommandParserState : public SimpleCommandParserState
{
public:

	/**
	 * @brief [brief description]
	 * @details [long description]
	 * @return [description]
	 */
	static EnterSimpleCommandParserState & Instance()
	{
		static EnterSimpleCommandParserState s;
		return s;
	}
	
	void setParser(SimpleCommandParser *newSimpleCommandParser);

	void setCalculator();

	void calcul();

	void calculWhenEnterCommand();

	void calculWhenSignCommand();
	
	Calculator *calculator;
private:
	/**
	 * @brief Default constructor. As file builds like Singletone.
	 * @details Default constructor. As file builds like Singletone. Must be a private
	 */
	EnterSimpleCommandParserState();
	
	/**
	 * @brief Copy constructor. As file builds like Singletone.
	 * @details Copy constructor. As file builds like Singletone. Must be a private
	 */
	EnterSimpleCommandParserState(EnterSimpleCommandParserState const &);
	
	/**
	 * @brief Compare operator. As file builds like Singletone.
	 * @details Compare operator. As file builds like Singletone. Must be a private
	 */
	EnterSimpleCommandParserState & operator = (EnterSimpleCommandParserState const&);

	SimpleCommandParser *simpleCommandParser;	/**< Needs to be in different states */
};

#endif ENTERSIMPLECOMMANDPARSERSTATE_H
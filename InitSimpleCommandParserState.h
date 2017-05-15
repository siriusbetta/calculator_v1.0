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

#include "SimpleCommandParserState.h"
#include "SimpleCommandParser.h"

/**
 * @brief Init SimpleParser State. Define order of calculations after
 * @details Init SimpleParser State. Define order of calculations after
 * program initializations
 */
class InitSimpleCommandParserState : public SimpleCommandParserState
{
public:

	/**
	 * @brief Instance of Singletone file
	 */
	static InitSimpleCommandParserState& Instance()
	{
		static InitSimpleCommandParserState s;
		return s;
	}	

	/**
	 * @brief Sets pointer to SimpleCommandParser
	 * 
	 * @param newSimpleParser pointer
	 */
	void setParser(SimpleCommandParser *newSimpleParser);

	void setCalculator();

	/**
	 * @brief React to the commands of PlusCommand, MinusCommand, EnterCommand
	 * @details React to the commands of PlusCommand, MinusCommand, DivCommand, MulCommand 
	 * and EnterCommand after the program initialisation
	 */
	void calcul();

	void calculWhenEnterCommand();

	void calculWhenSignCommand();

	void putFirstNumber();

	void putSecondNumber();
	
	bool isFirstNumberEmpty();

	bool hasFirstPosInNumberList();
	
	bool hasSecondPosInNumberList();

	void addDigitToDigitList();
	
	void addDigitToResultList();

	Calculator *calculator;

private:
	
	/**
	 * @brief Default constructor. As file builds like Singletone.
	 * @details Default constructor. As file builds like Singletone. Must be a private
	 */
	InitSimpleCommandParserState();
	
	/**
	 * @brief Copy constructor. As file builds like Singletone.
	 * @details Copy constructor. As file builds like Singletone. Must be a private
	 */
	InitSimpleCommandParserState( InitSimpleCommandParserState const& );

	/**
	 * @brief Compare operator. As file builds like Singletone.
	 * @details Compare operator. As file builds like Singletone. Must be a private
	 */
	InitSimpleCommandParserState &operator= (InitSimpleCommandParserState const&);

	SimpleCommandParser *simpleCommandParser; /**< Needs to be in different states */

};
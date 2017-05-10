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

#include "Calculator.h"
#include "PlusMathOp.h"
#include "MinusMathOp.h"
#include "MulMathOp.h"
#include "DivMathOp.h"

class SimpleCalculator: public Calculator
{
public:

	SimpleCalculator();
	
	~SimpleCalculator();

	void One();
	void Two();
	void Three();
	void Four();
	void Five();
	void Six();
	void Seven();
	void Eight();
	void Nine();
	void Zero();
	void Plus();
	void Minus();
	void Mul();
	void Div();
	void Point();
	void Enter();
	void Undo();
	
	double getResult();

	
	
	PlusMathOp plusOp;
	MinusMathOp minusOp;
	MulMathOp mulOp;
	DivMathOp divOp;
	
	
	
	using Calculator::mathOpsList;
	using Calculator::digitsList;
	using Calculator::resultList;
	using Calculator::strToDigconv;
	using Calculator::result;

private:

	bool validateCommandLine();
	bool isFirstOp();
	void addSymbolCommand(std::string symbol);
	void addOpCommand(MathOp *opCommand);

};
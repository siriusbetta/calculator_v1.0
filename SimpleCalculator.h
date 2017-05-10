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
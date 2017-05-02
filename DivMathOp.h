#include "MathOp.h"

class DivMathOp : public MathOp
{
public:

	DivMathOp();
	
	~DivMathOp();
	
	void execute();
	
	using  MathOp::a;
	
	using  MathOp::b;

	using  MathOp::result;
	
	using  MathOp::mathOpName;
};

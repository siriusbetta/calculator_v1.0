#include "MathOp.h"

class MulMathOp : public MathOp
{
public: 
	
	MulMathOp();
	
	~MulMathOp();
	
	void execute();
	
	using  MathOp::a;
	
	using  MathOp::b;

	using  MathOp::result;
	
	using  MathOp::mathOpName;
};

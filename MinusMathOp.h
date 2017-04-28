#include "MathOp.h"

class MinusMathOp : public MathOp
{
public:

	MinusMathOp();
	
	~MinusMathOp();
	
	void execute();
	
	using  MathOp::a;
	
	using  MathOp::b;

	using  MathOp::result;
};
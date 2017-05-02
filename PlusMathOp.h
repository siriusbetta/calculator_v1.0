#include "MathOp.h"

class PlusMathOp : public MathOp
{
public:

	PlusMathOp();
	
	~PlusMathOp();

	void execute();
	
	using  MathOp::a;
	
	using  MathOp::b;

	using  MathOp::result;
	
	using  MathOp::mathOpName;
};

#include "StdAfx.h"
#include "PlusMathOp.h"

PlusMathOp::PlusMathOp()
{
	mathOpName = "+";
}


PlusMathOp::~PlusMathOp()
{


}

void PlusMathOp::execute()
{
	result = a + b;
}

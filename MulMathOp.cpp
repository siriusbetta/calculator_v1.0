#include "StdAfx.h"
#include "MulMathOp.h"

MulMathOp::MulMathOp()
{
	mathOpName = "*";
}

MulMathOp::~MulMathOp()
{

}

void MulMathOp::execute()
{
	result = a * b;
}

#include "StdAfx.h"
#include "DivMathOp.h"

DivMathOp::DivMathOp()
{
	mathOpName = "/";
}

DivMathOp::~DivMathOp()
{

}

void DivMathOp::execute()
{
	result = a / b;
}

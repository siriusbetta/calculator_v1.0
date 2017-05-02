#include "StdAfx.h"
#include "MinusMathOp.h"

MinusMathOp::MinusMathOp()
{
	mathOpName = "-";
}

MinusMathOp::~MinusMathOp()
{

}

void MinusMathOp::execute()
{
	result = a - b;
}

#include "StdAfx.h"
#include "MathOp.h"

void MathOp::setA(double newA)
{
	a = newA;
}

void MathOp::setAB(double newA, double newB)
{
	a = newA;
	b = newB;
}

double MathOp::getResult()
{
	return result;
}
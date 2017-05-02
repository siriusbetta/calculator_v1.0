#include "string"

#pragma once

class MathOp
{
public:
	
	virtual void execute() = 0;

	void setA(double newA);

	void setAB(double newA, double newB);

	double getResult();
	
	double a;
	
	double b;

	double result;

	std::string mathOpName;
	
};
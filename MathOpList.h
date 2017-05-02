#include "MathOp.h"

#pragma once

class MathOpList
{
public:

	MathOpList();
	
	~MathOpList();

	void addOperation(MathOp *newMathOp);

	void removeOperation(int pos);

	bool hasNext();
	
	void setHeadPos();
	
	MathOp *getLast();

	int getLastPos();

	MathOp *get();
	
	MathOp *get(int pos);

	bool isEmpty();

	MathOp **mathOpsList;

	int size;

	int currentPos;

	int lastOperation;

private:

	void shift(int pos);

	
};
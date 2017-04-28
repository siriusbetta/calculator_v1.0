#include "StdAfx.h"
#include "MathOpList.h"

MathOpList::MathOpList() :
size(10),
currentPos(0),
lastOperation(0)
{
	mathOpsList = new MathOp*[size + 1];
}


MathOpList::~MathOpList()
{
	delete[] mathOpsList;
}


void MathOpList::addOperation(MathOp *newMathOp)
{
	if(lastOperation > size) 
		return;

	mathOpsList[lastOperation++] = newMathOp;
}

void MathOpList::removeOperation(int pos)
{
	if(pos < 0 || pos > lastOperation)
		return;

	shift(pos);
	lastOperation--;
}

bool MathOpList::hasNext()
{
	return currentPos < lastOperation;
}

void MathOpList::setHeadPos()
{

	currentPos = 0;
}

MathOp *MathOpList::get()
{
	return mathOpsList[currentPos++];
}

MathOp *MathOpList::get(int pos)
{
	if(pos < 0 || pos > lastOperation)
		return mathOpsList[currentPos];

	return mathOpsList[pos];
}

MathOp *MathOpList::getLast()
{
	return mathOpsList[lastOperation];
}

int MathOpList::getLastPos()
{
	return lastOperation;
}

void MathOpList::shift(int pos)
{
	for(int i = pos; i < lastOperation; i++)
	{
		mathOpsList[i] = mathOpsList[i + 1];	
	}

}
#include "StdAfx.h"
#include "MinusCommand.h"

MinusCommand::MinusCommand(Calculator *newCalc) :
calculator(newCalc)
{

}

MinusCommand::~MinusCommand()
{

}


void MinusCommand::execute()
{
	calculator->Minus();
}

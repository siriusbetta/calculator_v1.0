#include "StdAfx.h"
#include "MulCommand.h"

MulCommand::MulCommand(Calculator *newCalc) :
calculator(newCalc)
{

}

MulCommand::~MulCommand()
{

}

void MulCommand::execute()
{
	calculator->Mul();
}
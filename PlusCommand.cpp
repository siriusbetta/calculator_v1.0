#include "StdAfx.h"
#include "PlusCommand.h"

PlusCommand::PlusCommand(Calculator *newCalc) :
calculator(newCalc)
{

}

PlusCommand::~PlusCommand()
{
	
}

void PlusCommand::execute()
{
	calculator->Plus();
}
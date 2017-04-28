#include "StdAfx.h"
#include "FourCommand.h"

FourCommand::FourCommand(Calculator *newCalc) :
calculator(newCalc)
{

}

FourCommand::~FourCommand()
{

}

void FourCommand::execute()
{
	calculator->Four();
}
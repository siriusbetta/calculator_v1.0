#include "StdAfx.h"
#include "FiveCommand.h"

FiveCommand::FiveCommand(Calculator *newCalc) :
calculator(newCalc)
{

}

FiveCommand::~FiveCommand()
{

}

void FiveCommand::execute()
{
	calculator->Five();
}
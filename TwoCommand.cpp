#include "StdAfx.h"
#include "TwoCommand.h"

TwoCommand::TwoCommand(Calculator *newCalc) :
calculator(newCalc)
{

}

TwoCommand::~TwoCommand()
{

}

void TwoCommand::execute()
{
	calculator->Two();
}
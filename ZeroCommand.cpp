#include "StdAfx.h"
#include "ZeroCommand.h"

ZeroCommand::ZeroCommand(Calculator *newCalc) :
calculator(newCalc)
{

}

ZeroCommand::~ZeroCommand()
{

}

void ZeroCommand::execute()
{
	calculator->Zero();
}
#include "StdAfx.h"
#include "EnterCommand.h"

EnterCommand::EnterCommand(Calculator *newCalc) :
calculator(newCalc)
{

}

EnterCommand::~EnterCommand()
{

}

void EnterCommand::execute()
{
	calculator->Enter();
}
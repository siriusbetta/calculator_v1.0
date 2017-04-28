#include "StdAfx.h"
#include "OneCommand.h"

OneCommand::OneCommand(Calculator *newCalc) :
calculator(newCalc)
{

}

OneCommand::~OneCommand()
{

}

void OneCommand::execute()
{
	calculator->One();
}
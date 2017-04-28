#include "StdAfx.h"
#include "SevenCommand.h"

SevenCommand::SevenCommand(Calculator *newCalc) :
calculator(newCalc)
{

}

SevenCommand::~SevenCommand()
{

}

void SevenCommand::execute()
{
	calculator->Seven();
}
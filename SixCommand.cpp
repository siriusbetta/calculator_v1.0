#include "StdAfx.h"
#include "SixCommand.h"

SixCommand::SixCommand(Calculator *newCalc) :
calculator(newCalc)
{

}

SixCommand::~SixCommand()
{

}

void SixCommand::execute()
{
	calculator->Six();
}
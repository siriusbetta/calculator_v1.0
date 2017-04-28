#include "StdAfx.h"
#include "NineCommand.h"

NineCommand::NineCommand(Calculator *newCalc) :
calculator(newCalc)
{

}

NineCommand::~NineCommand()
{

}

void NineCommand::execute()
{
	calculator->Nine();
}
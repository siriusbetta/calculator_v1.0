#include "StdAfx.h"
#include "EightCommand.h"

EightCommand::EightCommand(Calculator *newCalc) :
calculator(newCalc)
{

}

EightCommand::~EightCommand()
{

}

void EightCommand::execute()
{
	calculator->Eight();
}
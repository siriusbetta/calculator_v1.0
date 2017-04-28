#include "StdAfx.h"
#include "ThreeCommand.h"

ThreeCommand::ThreeCommand(Calculator *newCalc) :
calculator(newCalc)
{

}

ThreeCommand::~ThreeCommand()
{

}

void ThreeCommand::execute()
{
	calculator->Three();
}
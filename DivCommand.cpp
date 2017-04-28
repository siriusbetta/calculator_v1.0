#include "StdAfx.h"
#include "DivCommand.h"

DivCommand::DivCommand(Calculator *newCalc) :
calculator(newCalc)
{

}

DivCommand::~DivCommand()
{

}

void DivCommand::execute()
{
	calculator->Div();
}
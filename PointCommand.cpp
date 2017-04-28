#include "StdAfx.h"
#include "PointCommand.h"

PointCommand::PointCommand(Calculator *newCalc) :
calculator(newCalc)
{

}

PointCommand::~PointCommand()
{

}

void PointCommand::execute()
{
	calculator->Point();
}
#include "StdAfx.h"
#include "Invoker.h"

Invoker::Invoker()
{

}

Invoker::~Invoker()
{

}

void Invoker::setCommand(Command *newCommand)
{
	command = newCommand;
}

void Invoker::run()
{
	command -> execute();
}
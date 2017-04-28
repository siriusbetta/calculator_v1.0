#include "StdAfx.h"
#include "CommandList.h"

CommandList::CommandList():
currentPos(0),
size(10),
lastCommand(0)
{
	commands = new Command*[size + 1];
}

CommandList::~CommandList()
{
	delete[] commands;
}

void CommandList::addCommand(Command *newCommand)
{
	if(lastCommand > size) return;

	commands[lastCommand++] = newCommand;
}

void CommandList::removeCommand(int pos)
{
	if(pos < 0 || pos > lastCommand) return;

	shift(pos);

	lastCommand--;
}

void CommandList::setHeadPos()
{
	currentPos = 0;
}

Command *CommandList::getCommand()
{
	return commands[lastCommand];
}

Command *CommandList::getCommand(int pos)
{
	if(pos < 0 || pos > lastCommand)
		return commands[currentPos];

	return commands[pos];
}

bool CommandList::hasNext()
{
	return currentPos < lastCommand;
}

void CommandList::shift(int pos)
{
	for(int i = 0; i < lastCommand - 1; i++)
	{
		commands[i] = commands[i + 1]; 
	}
}
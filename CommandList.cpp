////////////////////////////////////////////////////////////////
// Calculator - Simple calculator realization by patterns
// Copyright (C) 2017 - ? Alexey Konyshev (aleksey.konyshev@gmail.com)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
////////////////////////////////////////////////////////////////

/**
 * Headers
 */
#include "StdAfx.h"
#include "CommandList.h"

CommandList::CommandList():
currentPos(0),
size(10), 							/**< Default size 10 */
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
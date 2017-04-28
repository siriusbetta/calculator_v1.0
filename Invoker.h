#include "Command.h"

class Invoker
{
public:

	Invoker();

	~Invoker();

	void setCommand(Command *newCommand);

	void run();

	Command *command;
	
};
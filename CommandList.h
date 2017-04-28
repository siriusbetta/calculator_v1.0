#include "Command.h"

class CommandList
{
public:

	CommandList();
	
	~CommandList();
	
	Command *getCommand();

	Command *getCommand(int pos);

	void removeCommand(int pos);

	void addCommand(Command *newCommand);

	bool hasNext(); 
	
	void setHeadPos();
	
	int size;
	
	int currentPos;
	
	int lastCommand;

	Command **commands;

private:

	void shift(int pos);
};
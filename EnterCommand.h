#include "Command.h"
#include "Calculator.h"

class EnterCommand : public Command
{
public:

	EnterCommand(Calculator *newCalc);
	
	~EnterCommand();

	void execute();

	Calculator *calculator;
	
};
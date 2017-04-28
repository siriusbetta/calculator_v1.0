#include "Command.h"
#include "Calculator.h"

class PlusCommand : public Command
{
public:

	PlusCommand(Calculator *newCalc);
	
	~PlusCommand();

	void execute();

	Calculator *calculator;
};
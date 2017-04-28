#include "Command.h"
#include "Calculator.h"

class MinusCommand : public Command
{
public:

	MinusCommand(Calculator *newCalc);
	
	~MinusCommand();

	void execute();

	Calculator *calculator;
	
};
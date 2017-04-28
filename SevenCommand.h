#include "Command.h"
#include "Calculator.h"

class SevenCommand : public Command
{
public:

	SevenCommand(Calculator *newCalc);
	
	~SevenCommand();

	void execute();

	Calculator *calculator;
	
};
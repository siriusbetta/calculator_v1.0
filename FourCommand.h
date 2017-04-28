#include "Command.h"
#include "Calculator.h"

class FourCommand : public Command
{
public:

	FourCommand(Calculator *newCalc);
	
	~FourCommand();

	void execute();

	Calculator *calculator;
	
};
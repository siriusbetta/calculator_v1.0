#include "Command.h"
#include "Calculator.h"

class FiveCommand : public Command
{
public:

	FiveCommand(Calculator *newCalc);
	
	~FiveCommand();

	void execute();

	Calculator *calculator;
	
};
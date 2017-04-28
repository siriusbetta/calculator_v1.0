#include "Command.h"
#include "Calculator.h"

class MulCommand : public Command
{
public:

	MulCommand(Calculator *newCalc);

	~MulCommand();

	void execute();

	Calculator *calculator;
	
};
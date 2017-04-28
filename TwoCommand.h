#include "Command.h"
#include "Calculator.h"

class TwoCommand : public Command
{
public:

	TwoCommand(Calculator *newCalc);

	~TwoCommand();

	void execute();
	
	Calculator *calculator;
	
};
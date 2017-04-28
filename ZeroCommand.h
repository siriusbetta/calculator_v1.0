#include "Command.h"
#include "Calculator.h"

class ZeroCommand : public Command
{
public:

	ZeroCommand(Calculator *newCalc);
	
	~ZeroCommand();

	void execute();

	Calculator *calculator;
	
};
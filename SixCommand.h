#include "Command.h"
#include "Calculator.h"

class SixCommand : public Command
{
public:

	SixCommand(Calculator *newCalc);
	
	~SixCommand();

	void execute();

	Calculator *calculator;
	
};
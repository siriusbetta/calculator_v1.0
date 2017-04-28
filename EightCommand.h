#include "Command.h"
#include "Calculator.h"

class EightCommand : public Command
{
public:

	EightCommand(Calculator *newCalc);
	
	~EightCommand();

	void execute();

	Calculator *calculator;
	
};
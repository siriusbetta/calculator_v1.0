#include "Command.h"
#include "Calculator.h"

class ThreeCommand : public Command
{
public:

	ThreeCommand(Calculator *newCalc);
	
	~ThreeCommand();

	void execute();

	Calculator *calculator;
	
};
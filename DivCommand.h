#include "Command.h"
#include "Calculator.h"

class DivCommand : public Command
{
public:

	DivCommand(Calculator *newCalc);

	~DivCommand();
	
	void execute();

	Calculator *calculator;
};
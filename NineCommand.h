#include "Command.h"
#include "Calculator.h"

class NineCommand : public Command
{
public:

	NineCommand(Calculator *newCalc);
	
	~NineCommand();

	void execute();

	Calculator *calculator;
	
};
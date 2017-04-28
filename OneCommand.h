#include "Command.h"
#include "Calculator.h"

class OneCommand : public Command
{
public:

	OneCommand(Calculator *newCalc);
	
	~OneCommand();

	void execute();
	
	Calculator *calculator;	
};
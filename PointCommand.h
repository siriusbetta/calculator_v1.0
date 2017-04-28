#include "Command.h"
#include "Calculator.h"

class PointCommand : public Command
{
public:

	PointCommand(Calculator *newCalc);
	
	~PointCommand();

	void execute();

	Calculator *calculator;
	
};
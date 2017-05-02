#include "CommandParser.h"
#include "Calculator.h"

class SimpleCommandParser : public CommandParser
{
public:

	SimpleCommandParser();
	
	SimpleCommandParser(Calculator *newCalculator);

	~SimpleCommandParser();

	void setCalculator(Calculator *newCalculator);

	void calcul();

	void calculEnter();

	Calculator *calculator;

private:
};

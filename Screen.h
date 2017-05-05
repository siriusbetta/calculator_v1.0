#include "string"
#include "sstream"

class Screen
{
public:
	
	/**
	 * @brief adds new symbol to the screan
	 * 
	 * @param newSymbol 
	 */
	void typeSymbol(std::string newSymbol);

	/**
	 * @brief Clear screan variable and set size 0
	 * 
	 */
	void clearScreen();

	std::stringstream ss;
	
	int size;
};
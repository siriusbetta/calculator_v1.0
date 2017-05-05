#include "Screen.h"

class SimpleScreen : public Screen
{
public:
	
	/**
	 * @brief Default constructor
	 * 
	 */
	SimpleScreen();

	/**
	 * @brief destructor
	 * 
	 */
	~SimpleScreen();

	/**
	 * Parents {@code Screen} variable.
	 */
	using Screen::ss; 

	/**
	 * Parents {@code Screen} variable
	 */
	using Screen::size;
};
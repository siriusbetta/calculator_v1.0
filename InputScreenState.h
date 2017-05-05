#include "ScreenState.h"
#include "Screen.h"

class InputScreenState : public ScreenState
{
public:
	/**
	 * @brief Default constructor
	 * 
	 */
	InputScreenState();

	/**
	 * @brief Constructor set {@code Screen} * 
	 * @param newScreen 
	 */
	InputScreenState(Screen *newScreen);
	
	/**
	 * @brief destructor
	 */
	~InputScreenState();

	/**
	 * @brief Set new screen
	 * 
	 * @param newScreen [description]
	 */
	void setScreen(Screen *newScreen);

	void input(std::string newSymbol);

	void clear();
	
	Screen *screen;
};
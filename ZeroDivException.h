#include "Exception.h"

class ZeroDivException : public Exception
{
public:

	ZeroDivException();

	ZeroDivException(std::string newMessage);

	~ZeroDivException();
	
};
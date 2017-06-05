#include "StdAfx.h"
#include "ZeroDivException.h"

ZeroDivException::ZeroDivException()
{
	setMessage("Zero dividing");
}

ZeroDivException::ZeroDivException(std::string newMessage)
{
	setMessage(newMessage);
}

ZeroDivException::~ZeroDivException()
{

}

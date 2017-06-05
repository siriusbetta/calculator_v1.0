////////////////////////////////////////////////////////////////
// Calculator - Simple calculator realization by patterns
// Copyright (C) 2017 - ? Alexey Konyshev (aleksey.konyshev@gmail.com)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
////////////////////////////////////////////////////////////////

#include "exception"
#include "string"

/**
 * @brief Abstract class of exception. All exceptions must be inherit this class
 */
class Exception : public exception
{
public:
	
	/**
	 * @brief Overrided method from basic std exception
	 *	returns exception description
	 * 
	 * @return exception message
	 */
	const char * what() const throw(); 

	void setMessage(std::string newMessage);
private:

	std::string message;	/**< Exception message*/
};
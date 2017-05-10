/**
* Calculator - Simple calculator realization by patterns
* Copyright (C) 2017 - ? Alexey Konyshev (aleksey.konyshev@gmail.com)
*
* This software is provided 'as-is', without any express or implied warranty.
* In no event will the authors be held liable for any damages arising from the use of this software.
*
* Permission is granted to anyone to use this software for any purpose,
* including commercial applications, and to alter it and redistribute it freely,
* subject to the following restrictions:
*
* 1. The origin of this software must not be misrepresented;
*    you must not claim that you wrote the original software.
*    If you use this software in a product, an acknowledgment
*    in the product documentation would be appreciated but is not required.
*
* 2. Altered source versions must be plainly marked as such,
*    and must not be misrepresented as being the original software.
*
* 3. This notice may not be removed or altered from any source distribution.
*
*/

#pragma once

#ifndef DIGITS_LIST_H
#define DIGITS_LIST_H

/**
 * @brief Array List of doubles numbers
 */
class DigitsList
{
public:
	
	/**
	 * A constructor.
	 * Initialises init values of size and current position and allocate memory for list 
	 * according init size + 1
	 */
	DigitsList();
	

	/**
	 * A destructor
	 * deletes memory of list
	 */
	~DigitsList();

	/**
	 * @brief adds a new value to the end of the list
	 * 
	 * @param newDigit a new value
	 */
	void addDigit(double newDigit);

	/**
	 * @brief deletes a value in a given position
	 * @param pos a value position in the list 
	 */
	void removeDigit(int pos);

	void setHaedPos();
	
	/**
	 * @brief true if next value avaible
	 * 
	 * @return boolean
	 */
	bool hasNext();

	/**
	 * @brief Gets last value
	 * 
	 * @return double
	 */
	double getLast();

	/**
	 * @brief Returns last number position in the list
	 * 
	 * @return [description]
	 */
	int getLastPos();

	/**
	 * @brief Same with {@code getlast}
	 * 
	 * @return double
	 */
	double get();

	/**
	 * @brief Returns value stored by pos in the list
	 * 
	 * @param pos position in the list
	 * @return double
	 */
	double get(int pos);

	double *digits; /**< Point to the memory for the values */

	int size; 		/**< Size of the list*/

	int lastDigit;

	int currentPos;

private:

	void shift(int pos);
	
};

#endif DIGITS_LIST_H
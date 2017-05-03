#pragma once

class CommandParser
{
public:

	/**
	 * @brief Process calcualtion after pushing button Enter. Hovewer it
	 * method used in math sign buttons also
	 * 
	 */
	virtual void pushEnterCalcul() = 0;

	/**
	 * @brief Process calculation after pushing buttons +-/*
	 * 
	 */
	virtual void pushSignCalcul() = 0;
};
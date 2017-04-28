#pragma once

class DigitsList
{
public:
	
	DigitsList();
	
	~DigitsList();

	void addDigit(double newDigit);

	void removeDigit(int pos);

	void setHaedPos();
	
	bool hasNext();

	double getLast();

	int getLastPos();

	double get();

	double get(int pos);

	double *digits;

	int size;

	int lastDigit;

	int currentPos;

private:

	void shift(int pos);
	
};
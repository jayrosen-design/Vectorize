//Jay Rosen
//This is the Vectorize class for mod2.cpp.
//This class is used for storing input numbers for vector.

#ifndef Vectorize_H
#define Vectorize_H

class Vectorize
{
private:
	int Num;								// Private variables
	int index;
	void setNum(int);						//To store the input number

public:
	Vectorize();							//Default constructor
	void getNum(int);						//To pass user input to private

};
#endif
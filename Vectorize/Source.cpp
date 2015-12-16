//Jay Rosen
// This program stores input integers into a vector

#include "Vectorize.h"
#include <iostream>
#include <vector>
using namespace std;

//prototype functions
int getInput();
void validate(int& n);


/*************************************
*                main               *
*************************************/
int main()
{
	vector <int> values;
	int num = 0;		//initialize integer variables as 0
	int index = 0;
	int quit = 101;		//initialize Quit to 101


	cout << "\n\n";		//Prompt for input
	cout << "\t\t Enter an integer between 10 - 100. \n";
	cout << "\t\t Type 101 to Quit. \n\n";

	while (num != quit)		// 101 to quit, or continue program
	{

		cout << "\n\t\t No.  " << (index + 1) << " : ";		//Display count number	
		num = getInput();									//Get input integer and sent to getInput() for validation
		values.push_back(num);								//If number is validated, insert the input into the vector


		if (num == quit)									//Determine if user entered Quit
		{
			values.pop_back();								//Remove the previous input (101) from vector
			index--;										//Remove 1 count
															//Program is taken out of loop from previous step
		}


		if (num < 10 || num > 101)						//Determine if input is within specified range of 10 - 100
		{
			values.pop_back();							//If number is not within range, remove input number from vector
			index--;									//Remove a counter
			cout << "\a\n\t\t Error: Invalid input! \n";		//Display error message and how to correct problem
			cout << "\t\t Enter an integer between 10 - 100. \n";
			cout << "\t\t Type 101 to Quit. \n\n";

		}

		index++;										//Add a counter after number has been validated through the different tests

	}

	cout << "\n\n\t\t You entered " << values.size() << " valid numbers : \n\n\t\t ";	//After user Quits program, display the size and contents of vector

	for (index = 0; index < values.size(); index++)
	{
		cout << values[index] << " , ";

	}

	cout << "\n\n\t\t";						//Extra spacing at end

	system("pause");
	return 0;
}


/*************************************
*				getInput             *
*	Get input from user and send to	 *
*           validate function.		 *
*************************************/
int getInput()
{
	int num;
	cin >> num;
	validate(num);							//Input numbers are passed to validate()

	return num;
}

/*************************************
*				validate              *
*	Determine if input is non-integer *
*	and display error message.        *
*************************************/
void validate(int& n)
{
	while (!cin)						//Check if input is correct
	{
		cin.sync();
		cin.clear();
		cout << "\a\n\t\t Error: Invalid input! \n";
		cout << "\t\t Enter an integer between 10 - 100. \n";
		cout << "\t\t Type 101 to Quit. \n\n\t\t";
		cin >> n;
	}
}
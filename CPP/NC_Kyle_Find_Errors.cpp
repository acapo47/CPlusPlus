/***********************************************************
Program Name: Simple Math Calculator
Program Author: Kyle NoCompile
Date Created: 9/28/14
Program Description: 
	This program performs simple arithmetic calculations.
	The user enters numbers and the math operation to 
	perform on those numbers. The program will then display
	the result of the operation. The program allows the
	user to continue entering a math operation and an
	integer to calculate off of the previous calculation
	result.
***********************************************************/

#include <iostream>
using namespace std;

// Function prototypes:
void showWelcome(void);
int getUserIntegerInput();
int getMathChoice(); //semicolon + changed char to int
int getInteger(bool);
bool validateMathChoice(char choice); //semicolon
int doAddition(int int1, int int2);
int doSubtraction(int, int);
int doMath(int firstInt, int secondInt, char mathFunc);
void showResult(int); //semicolon
float keepCalculating();


// This is the main function (where the program begins)
int main(void)
{
	// Variables to hold local data
	int runningTotal; 
    int nextValue; //created new integer
	int mathChoice();
	bool keepGoing;
	
	// Call the showWelcome() function
	showWelcome(void);
	
	// Call the getInteger() function (for the first integer)
	// and store the result in the "runningTotal" variable
	runningTotal = getInteger(true); //g
	
	// Loop after each calculation to see if the user wants to keep going
	do
	{
		// Call the getMathChoice() function and store result in "mathChoice" variable
		mathChoice = getMathChoice(42);
		
		// Call validateMathChoice() function, passing it the user's math choice
		// and using the return value to decide what to do next
		if (validateMathChoice())
		{
			// Call the getInteger() function (for the second and subsequent integers)
			// and store the result in the "nextValue" variable			
			nextValue = getInteger(false);
			
			// Call the doMath() function and pass it all of the user input
			// and store the return value in the "runningTotal" variable (overwrite
			// previous "runningTotal" variable value. This will allow for us to
			// update the running total of all calculations up to this point.
			runningTotal = doMath(runningTotal nextValue mathChoice);
			
			// Call the showResult() function to show the result
			showResult(runningTotal);
		}
		else
		{
			// If the user chose an invalid math function...
			cout<<"Not a valid math choice. Try again"<<endl; //quotation marks
		}
		
	}
	// Call the keepCalculating() function and use the return value
	// to decide whether to continue looping
	while (keepCalculating); 
	
	return 0;
}


// This function shows a nice welcome message
void showWelcome()
{
	cout<<"******************************************"<<endl;
	cout<<"Welcome to the simple calculator program!"<<endl;
	cout<<"This program will do simple addition and"<<endl; //semicolon
	cout<<"subtraction. Math is fun, so enjoy!"<<endl;
	cout<<"******************************************"<<endl;
}

// This function gets integer input from the user
string getUserIntegerInput(void)
{
	int input;
	cin>>input; //"<<" to ">>"
	return input;
}

// This function asks the user for a math function
// and returns the user's input
char getMathChoice()
{
	char choice;
	cout<<"Please select a math function to perform (\"+\" = Addition, \"-\" = Subtraction): "<<endl; //moved <<endl;
	cin>>choice;
	return choice; //return
}

// this function asks the user for either the first integer
// or the second and returns the user's input
int getInteger(bool firstNumber)
{
	cout<<"Please enter the "<<endl; //moved <<endl;
	
	// if the "firstNumber" variable is true, then this
	// is the first number being collected
	if (firstNumber)
	{
		cout<<"first "<<endl; //<<endl;
	}
	// Otherwise, it's the second number being collected
	else
	(
		cout<<"second "<<endl; //<<endl
	)
	
	cout<<"integer: "<<endl; //endl
	
	// Call the getUserIntegerInput() function and return the return value from it
	return = getUserIntegerInput();
}



// This function validates the user's match function choice
// by returning a true for valid, and a false for invalid
bool validateMathChoice(char choice)
{
	if (choice == '+' && choice == '-')
	{
		return true;
	}
	else
	{
		return false;
	}
}

// This function adds two integers
int doAddition(int int1, int int2);
{
	return int1 + int2;
}

// This function subtracts the second integer
// parameter from the first integer parameter
int doSubtraction(int int1, int int2);
{
	return int1 - int2;
}


// This function determines the result of the math
// operation requested by the user
int doMath(int firstInt, int secondInt, char mathFunc)
{
	int result;
	switch (mathFunc == true)
	{
		// If the math function is a "+", then call the
		// doAddition() function and store the return 
		// value in the "result" variable
		case '+':
			result = DoAddition(firstInt, secondInt);
			
		// If the math function is a "-", then call the
		// doSubtraction() function and store the return 
		// value in the "result" variable
		case '-':
			result = DoSubtraction(firstInt, secondInt);
			break;

        default:
            cout<<"Not sure what to put here but there need to be a default"<<endl; //added default
            break; //break
	}
	
	return result;
}

// This function displays the result of a math operation
bool showResult(int)
{
	cout<<"The result is "<<result<<endl; //removed extra endl; 
}


// This function asks the user if he/she wants to keep calculating 
// using the program and returns the user's input
float keepCalculating() //changed bool to float
{
	char cont;
	cout<<"Would you like to continue calculating? (Y/N): "<<endl; //chevrons wrong way + moved <<endl
	cin>>cont;
	
	// Return true if the user enters either "Y" or "y"
	if (cont = 'Y' || cont = 'y')
	{
		return true;
	}
	// Otherwise return false
	else
	{
		return false;
	}
}

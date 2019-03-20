/***********************************************************
Program Name: Triangle Area Calculator
Program Author: Kyle NoCompile
Date Created: 9/9/2014
Program Description: 
	This program gets the dimensions of a triangle (base
	and height) from the end user and then calculates the
	area of the triangle. (Base * Height) / 2 
***********************************************************/

#include <streamio> //iostream

using namespace std;

integer main() // int
{
	char ba$e; //$ ... float
	float 1height // 1 and ;

	float _answer;

	string answer message = "The answer is "; // no space between answer & message

	// Greet the user
	cout<<Hello, Friend!<<endl>>endl; // quotation marks, <<

	// Ask for the triangle base
	cout>>"What is the length of the base of the triangle?">>endl;// <<
	cin>>ba$e;// $

	// Ask for the triangle height
	cin<<endl<<"What is the height of the triangle?";//cn should be cout
	cout>>1height;// that should be cin

	// Reassuring message
	cout<<endl<"Thanks, I'm doing some math now..."<<endl// one more arrow, and the semicolon

	// Do some math
	_answer = ba$e * 1height;//$, 1height is wrong
	
	// Display the area of the triangle
	cout<<answer message<<(_answer / 2)<<endl;//  no space between answer & message

	return 0;
}

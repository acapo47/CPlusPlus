//Number Guessing Game
//A player will be opposing a computer in a number guessing game with any number between 1 and 10
//Anthony Capo
//Date Created: 12 September 2014
//Date Last Modified: 12 September 2014

#include <cstdlib>
#include <iostream> 
#include <ctime>

using namespace std; 

int main() 

{
	int userInput;
	int randNum;

	srand(time(NULL));

	cout<<"Welcome to Anthony's number guessing game!"<<endl; 
	cout<<"Choose a number between 1 and 10"<<endl;
	cin>>userInput;
	cout<<"Your input was "<<userInput<<"."<<endl;

	randNum = rand() % 10 + 1;

	if(randNum == userInput) {
		cout<<"You won!"<<endl;
	}
	
	else{ 
	cout<<"You lost. The correct answer was "<<randNum<<endl;
	}
	return 0;

}


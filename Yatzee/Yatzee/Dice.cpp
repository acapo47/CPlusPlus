#include "Dice.h"
#include "Player.h"

#include <string>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <stdio.h>
#include <Windows.h>

using namespace std;


Dice::Dice(int _numDice, int _sidedDice) 
	: numDice(2), sidedDice(6)
{
	numDice = _numDice;
	sidedDice = _sidedDice;
}
//Getters
int Dice::getTotal() 
{
	cout<<"getting the total\n";
	total = 0;
	if(someDice.size() > 0)
	{
		for(int x=0; x < someDice.size(); x++)
		{
			total = total + someDice[x];
			cout<<"Updating somedice\n";
		}
	}	
	if(savedDice.size() > 0)
	{
		for(int x=0; x < savedDice.size(); x++)
		{
			total = total + savedDice[x];
			cout<<"Updating savedDice"<<endl;
		}
	}

	return total;
}
//Rollers
void Dice::roll()
{
	// someDice.clear();
	//Length = 5, unless there are saved Dice
	int theLength = 5;

	//Print the Die number
	cout<<"Die #:   ";
	for(int x = 1; x < 6; x++)
	{
		cout<<setw(6)<<left<<x;
	}
	cout<<endl<<"         ";

	//Roll Each Die and store in someDice vector
	for(int x = 0; x < theLength; x++)
	{
		rolls[x] = 0;
		srand(time(NULL));
		rolls[x] = rand() % 6 + 1;
		cout<< setw(6)<<rolls[x];
		Sleep(800);
		cout.flush();
	}

	//Show all saved Dice, if any
	if(savedDice.size() > 0)
	{
		for(int i=0; i<savedDice.size(); i++)
		{
			cout<< setw(6)<< savedDice[i];
		}
		for(int i=0; i<savedDice.size(); i++)
		{
			cout<< setw(6)<< "Save";
		}
	}
	cout<<endl;

	//Save all Rolls in vector someDice
	for(int x=0; x< theLength; x++)
	{
		cout<<rolls[x];
		this->savedDice.push_back(rolls[x]);
	}

	cout<<endl<<"someDice"<<endl;
	for(int x=0; x< theLength; x++)
	{
		cout<<savedDice[x];
	}
	cout<<endl<<endl;

}
void Dice::saveDie()
{
	int input;

	while(input != -1)
	{
		cin >> input;
		input--;
		if(input < 5 && input >=0)
		{
			cout<<"\nCurrent size of someDice: "<<this->someDice.size()<<endl;
			this->savedDice.push_back(3);
			cout<<"current size of savedDice: "<<this->savedDice.size()<<endl;
			// this->someDice.erase(savedDice.begin()+input);

			Dice::printDice();
		}
	}
}
void Dice::removeDie()
{
	char input;
	while(input != 'y')
	{
		cin >> input;
		if(input != 'y')
		{
			savedDice.erase(savedDice.begin()+input);
		}
	}
}
//Print
void Dice::printScore()
{
	for(int i=0; i<savedDice.size(); i++)
	{
		cout<<setw(6)<<savedDice[i];
	}
	for(int i=0; i<someDice.size(); i++)
	{
		cout<<setw(6)<<someDice[i];
	}

}
void Dice::printDice()
{
	int theLength = 5 - savedDice.size();
	// //Print out the Dice numbers
	// cout<<"Die #:   ";
	// for(int x = 1; x < 6; x++)
	// {
	// 	cout<<setw(6)<<left<<x;
	// }
	// cout<<endl<<"         ";
	// //Print out unsaved Dice
	// if(someDice.size() > 0)
	// {
	// 	for(int i=0; i<someDice.size(); i++)
	// 	{
	// 		cout<< setw(6)<< rolls[i];
	// 	}
	// }
	// //Print out saved Dice
	// if(savedDice.size() > 0)
	// {
	// 	for(int i=0; i<savedDice.size(); i++)
	// 	{
	// 		cout<< setw(6)<< savedDice[i];
	// 	}
	// 	cout<<endl<<"         ";
	// 	for(int i=0; i<savedDice.size(); i++)
	// 	{
	// 		cout<< setw(6)<< "Save";
	// 	}
	// }


	
	//Print out the Dice numbers
	cout<<"Die #:   ";
	for(int x = 1; x < 6; x++)
	{
		cout<<setw(6)<<left<<x;
	}
	cout<<endl<<"         ";
	//Print out saved Dice
	if(savedDice.size() > 0)
	{
		for(int i=0; i<savedDice.size(); i++)
		{
			cout<< setw(6)<< savedDice[i];
		}
		cout<<endl<<"         ";
		for(int i=0; i<savedDice.size(); i++)
		{
			cout<< setw(6)<< "Save";
		}
	}
	cout<<endl;
	//Print out unsaved Dice
	if(someDice.size() > 0)
	{
		for(int i=0; i<someDice.size(); i++)
		{
			cout<< setw(6)<< someDice[i];
		}
	}
}
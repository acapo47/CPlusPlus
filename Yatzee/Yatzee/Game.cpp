#include "Dice.h"
#include "Player.h"

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

bool userAnswer();

int main()
{
	//Initialize Game Settings------------------------
	string p1name, p2name, nothing;
	int numDice, sDice;
	int p1Score = 0;
	int p2Score = 0;
	int p1wins = 0;
	int p2wins = 0;
	int tie = 0;
	bool again = true;
	bool yes;

	///////////////////////////////////////////////////

	//Initialize Players and Dice ----------------------
	// cout<< "Please enter in the first players name\n";
	// getline(cin, p1name);
	// cout<< "Please enter in the second players name\n";
	// getline(cin, p2name);

	// cout<<"How many dice would you like to use?\n";
	// cin >> numDice;
	// cout<<"How many sides should each die have?\n";
	// cin >> sDice;
	cout<<"\n\n\n";

	Player p1("Marc", 5, 6);
	Player p2("AI", 5, 6);
	///////////////////////////////////////////////////

	//Start the Game and loop-------------------------------------------------
	while (again)
	{
		//Player 1's turn-----------------------------------------------------
		for(int i=1; i<3+1; i++)
		{
			cout<<p1.getName()<<" press enter for your "<< i <<" roll...\n";
			getline(cin, nothing);
			// cin.ignore();
			p1.getDie().roll();

			//Save Dice
			cout<<"would you like to save any dice?\n";
			yes = userAnswer();
			if(yes == true)
			{
				cout<< "Which Dice would you like to keep?\n";
				p1.getDie().saveDie();
			}

			//Remove Dice
			cout<<"would you like to remove any dice?\n";
			yes = userAnswer();
			if(yes == true)
			{
				cout<< "Which Dice would you like to remove?\n";
				p1.getDie().removeDie();
			}

			p1.getDie().printScore();

			p1Score = p1.getDie().getTotal();
			cout<<endl<<endl<< p1.getName() << " scored a " << p1Score << endl << endl;
		}
		//////////////////////////////////////////////////////////////////////
		//Player 2's turn-----------------------------------------------------
		for(int i=1; i<3+1; i++)
		{
			cout<<p2.getName()<<" press enter for your "<< i <<" roll...\n";
			getline(cin, nothing);
			// cin.ignore();
			p2.getDie().roll();

			//Save Dice
			cout<<"would you like to save any dice?\n";
			yes = userAnswer;
			if(yes == true)
			{
				cout<< "Which Dice would you like to keep?\n";
				p2.getDie().saveDie();
			}
			//Remove Dice
			cout<<"would you like to remove any dice?\n";
			yes = userAnswer;
			if(yes == true)
			{
				cout<< "Which Dice would you like to remove?\n";
				p2.getDie().removeDie();
			}

			p2.getDie().printScore();

			p1Score = p2.getDie().getTotal();
			cout<<endl<<endl<< p2.getName() << " scored a " << p2Score << endl << endl;
		}
		//////////////////////////////////////////////////////////////////////
		
		if(p1Score > p2Score)
		{
			cout<< p1.getName() << " wins the round!.\n";
			p1wins++;
		}
		else if(p1Score < p2Score)
		{
			cout<< p2.getName() << " wins the round!.\n";
			p2wins++;
		}
		else if(p1Score == p2Score)
		{
			cout<< "Tie!\n\n";
			tie++;
		}

		cout<<p1.getName() << "'s Wins: " << p1wins << endl;
		cout<<p2.getName() << "'s Wins: " << p2wins << endl;
		cout<<"Ties:      "<< tie << endl;
	
		again == userAnswer();
	}
	///////////////////////////////////////////////////////////////////////////

	return 0;
}

bool userAnswer()
{
	bool cont=true;
	char k;
	bool yes=false;
	while(!yes)
	{
		cin >> k;
		if(toupper(k)=='Y')
		{
			yes = true;
			cont = true;
		}
		else if(toupper(k)=='N')
		{
			yes = true;
			cont = false;
		}
		else
			yes = false;		
	}
	cout<<endl<<endl;
	return cont;
}


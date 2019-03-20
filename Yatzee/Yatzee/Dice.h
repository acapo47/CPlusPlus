#ifndef DICE_H
#define DICE_H

#include <vector>

using namespace std;

class Dice
{
	private:
	
	int numDice; 	 //How many dice does the player have?
	int sidedDice; 	 //How many sides does the Dice have?
	int total;		 //What is the total of all Dice rolled.
	int score;		 //Total with individual rolls
	int singleRoll;	 //Last Single roll
	vector <int> savedDice;
	vector <int> someDice;
	int rolls[5];



	public:
	//Constructor
	Dice(int _numDice, int _sidedDice);
	//Getters
	int getTotal();
	int getScore();
	//Rollers
	void roll();
	//Setters
	void saveDie();
	void removeDie();
	//Print
	void printScore();
	void printDice();
};
#endif

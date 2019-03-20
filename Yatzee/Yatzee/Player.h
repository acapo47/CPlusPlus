#ifndef PLAYER_H
#define PLAYER_H
#include "Dice.h"

#include <string>
#include <iostream>
using namespace std;

class Player
{
    private:
    	//Player
        int score;
        string name;
        //Dice
        Dice die;

    public:
        Player(string _name, int _numOfDice, int _sidedDice );
        //Getters
		Dice getDie();
		string getName();
		//Setters
		void setName(string _name);

};

#endif
        

        

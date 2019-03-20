#include "Player.h"
#include "Dice.h"

using namespace std;

Player::Player(string _name, int _numOfDice, int _sidedDice)
	: name(_name), die(_numOfDice, _sidedDice)
{
	name = _name;

}
//Getters
string Player::getName()
{
	return name;
}
Dice Player::getDie()
{
	return die;
}
//Setters
void Player::setName(string _name)
{
	name = _name;
}

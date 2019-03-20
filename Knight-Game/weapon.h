/*****************************************
Joust
Two random knights joust each other to see who can hit each other off first or who loses due to lack of stamina
Anthony Capo
Date created: 10/24/14
Last date modified: 11/3/2014

*****************************************/

#include <iostream>
#ifndef WEAPON_H
#define WEAPON_H
using namespace std;

class Weapon
{
    private:
        int staminaCost;
        int hitChance;
        string type;

    public:
        Weapon(int sc, int hc, string t);
        bool didHit();
        int getStaminaCost();
        void display();
};

#endif

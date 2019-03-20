/*****************************************
Joust
Two random knights joust each other to see who can hit each other off first or who loses due to lack of stamina
Anthony Capo
Date created: 10/24/14
Last date modified: 11/3/2014

*****************************************/

#include <iostream>
#include <algorithm>
#include "weapon.h"
using namespace std;

        Weapon::Weapon(int sc, int hc, string t)
:staminaCost(sc), hitChance(hc), type(t)
{
}

//uses the computers random number generator to decide if the knights hit each other or not

bool Weapon::didHit()
{
        int randNum;
        randNum = rand() % 100 + 1;
        if(randNum <= hitChance)
                return true;
        else
                return false;
}

int Weapon::getStaminaCost()
{
        return staminaCost;
}
void Weapon::display()
{
    cout<<"Weapon is "<<type<<endl;
    cout<<"Stamina cost for this weapon is "<<staminaCost<<endl;
    cout<<"The hit chance for this weapon is "<<hitChance<<endl;
}

/*****************************************
Joust
Two random knights joust each other to see who can hit each other off first or who loses due to lack of stamina
Anthony Capo
Date created: 10/24/14
Last date modified: 11/3/2014

*****************************************/

#include <iostream>
#include <string>
#include "weapon.h"
#include "knights.h"
using namespace std;

        Knights::Knights(string n, string t, int s, int sc, int hc)
:name(n), weapon(sc,hc,t), stamina(s)
{
        horse = true;
}
bool Knights::isOnHorse()
{
        if(stamina > 0)
                return horse;

        else
        {
                horse = false;
                return horse;
        }
}

bool Knights::wield()
{
        stamina = stamina - weapon.getStaminaCost();
        return weapon.didHit();
}

bool Knights::isExhausted()
{
        if(stamina < 0)
                return true;
        else
                return false;
}
void Knights::unhorseYourself()
{
        horse = false;
}
void Knights::display()
{

    if(horse == false)
    {
        cout<<name<<" is off his horse."<<endl;
    }
    else
    {
        cout<<name<<" is on his horse."<<endl;
    }
    if(stamina <= 0)
    {
        cout<<name<<" is exhausted"<<endl;
    }
   else
    {
        cout<<name<<" is not exhausted"<<endl;
    }
    weapon.display(); //displays the stats for knights
}

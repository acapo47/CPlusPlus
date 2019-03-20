/*****************************************
Joust
Two random knights joust each other to see who can hit each other off first or who loses due to lack of stamina
Anthony Capo
Date created: 10/24/14
Last date modified: 11/3/2014

*****************************************/

#include <iostream>
#include "knights.h"
#include "weapon.h"
using namespace std;
int main()
{
    /*Knights firstKnight(knight1, weapon1, stamina1, staminaCost1, hitChance1);
    Knights secondKnight(knight2, weapon2, stamina2, staminaCost2, hitChance2);*/

    string knight1, knight2;
    int stamina1, stamina2;
    int staminaCost1, staminaCost2;
    int hitChance1, hitChance2;
    string weapon1, weapon2;
    cout<<"What is Knight 1's name?"<<endl;
    cin>>knight1;
    cout<<"Name "<<knight1<<"'s weapon"<<endl;
    cin>>weapon1;
    cout<<"What is Knight 1's stamina?"<<knight1<<endl;
    cin>>stamina1;
    cout<<"What is the weapon's stamina cost? "<<weapon1<<endl;
    cin>>staminaCost1;
    cout<<"Enter the Hit Chance for "<<weapon1<<endl;
    cin>>hitChance1;

    cout<<"What is Knight 2's name?"<<endl;
    cin>>knight2;
    cout<<"Name "<<knight2<<"'s weapon"<<endl;
    cin>>weapon2;
    cout<<"What is Knight 2's stamina?"<<knight2<<endl;
    cin>>stamina2;
    cout<<"What is the weapon's stamina cost?"<<weapon2<<endl;
    cin>>staminaCost2;
    cout<<"Enter the Hit Chance for "<<weapon2<<endl;
    cin>>hitChance2;


    Knights firstKnight(knight1, weapon1, stamina1, staminaCost1, hitChance1);
    Knights secondKnight(knight2, weapon2, stamina2, staminaCost2, hitChance2);
   while(firstKnight.isOnHorse() == true && secondKnight.isOnHorse() == true && firstKnight.isExhausted() == false && secondKnight.isExhausted() == false)
   {

    if(firstKnight.wield() == true)
    {
        secondKnight.unhorseYourself();
    }
    if(secondKnight.wield() == true)
    {
        firstKnight.unhorseYourself();
    }


   }
firstKnight.display();
cout<<endl;
secondKnight.display();


    return 0;
}

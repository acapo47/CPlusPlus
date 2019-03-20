#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "weapon.h"
#include "knight.h"

using namespace std;

int main()
{
    srand(time(NULL)); //generates the random number for hit chance result

    string n;
    int s;
    bool oh;
    int sc;
    int hc;
    string ty;


    cout<<"What is the first knight's name?"<<endl;
    cin>>n;
    cout<<"What is the first knight's stamina?"<<endl;
    cin>>s;
    cout<<"What is the first knight's weapon?"<<endl;
    cin>>ty;
    cout<<"What is the first knight's weapon stamina cost?"<<endl;
    cin>>sc;
    cout<<"What is the first knight's weapon hit chance?"<<endl;
    cin>>hc;
    cout<<n<<" is now on the horse and ready to battle!"<<endl;

    knight k1(n, s, ty, sc, hc);
    k1.display();


    cout<<"What is the second knight's name?"<<endl;
    cin>>n;
    cout<<"What is the second knight's stamina?"<<endl;
    cin>>s;
    cout<<"What is the second knight's weapon?"<<endl;
    cin>>ty;
    cout<<"What is the second knight's weapon stamina cost?"<<endl;
    cin>>sc;
    cout<<"What is the second knight's weapon hit chance?"<<endl;
    cin>>hc;
    cout<<n<<" is now on the horse and ready to battle!"<<endl;

    knight k2(n, s, ty, sc, hc);
    k2.display();

    bool l=true;
    int winner = -1;
    int counter = 0;

    do
    {
        k1.display();
        cout<<endl;
        cout<<"Knight2: "<<endl;
        k2.display();
        cout<<endl;
        counter = counter + 1;
        if (k1.subStamina())
        {
            winner = 2;
            l = false;
        }

        if (k2.subStamina())
        {
            if(winner==2)
            {
                winner=3;
            }
            else winner=1;
            l = false;
        }

        if(winner!=-1)
        {
            continue;
        }

        if(k1.is_onHorse(k2.hit()) == false)
        {
            winner = 2;
            l = false;
        }

        if(k2.is_onHorse(k1.hit()) == false)
        {
            if(winner == 2)
            {
                winner = 3;
            }
            else winner = 1;
            l = false;
        }

    }
        while(l);
        if(winner == 1)
        {
            cout<<"Winner: "<<endl;
            k1.display();
            cout<<"After "<<counter<<" rounds"<<endl<<endl;
            cout<<"Loser: "<<endl;
            k2.display();
        }

        if(winner== 2)
        {
            cout<<"Winner: "<<endl;
            k2.display();
            cout<<"After "<<counter<<" rounds"<<endl<<endl;
            cout<<"Loser: "<<endl;
            k1.display();
        }

        if (winner == 3)
        {
            cout<<"Match was a tie after "<<counter<<" rounds"<<endl<<endl;
            cout<<"Knight 1: "<<endl;
            k1.display();
            cout<<endl;
            cout<<"Knight 2: "<<endl;
            k2.display();

        }

        return 0;
}


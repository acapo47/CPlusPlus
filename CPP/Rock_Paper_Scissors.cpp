//Rock Paper Scissor Game
//A player will be pitted against a CPU in a game of Rock Paper Scissors
//Anthony Capo
//Date Created: 22 September 2014
//Date Last Modified: 26 September 2014

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    int Scis = 0;
    int Pap = 0;
    int Roc = 0;
    int wins = 0;
    int losses = 0;
    int ties = 0;
    int games = 0;
    int Rock = 1;
    int Paper = 2;
    int Scissors = 3;
    bool gameOver = false;
    string input;
    cout<<"-----------------------------------"<<endl;
    cout<<"Let's play Rock, Paper, Scissors!"<<endl;
    cout<<"-----------------------------------"<<endl;


while (!gameOver)
{
    games++;
    int ans = 0;
    srand(time(NULL));
    ans = rand() % 3+1;
    cout<<"Enter 1 for Rock, 2 for Paper or 3 for Scissors"<<endl;
    int num;
    cin>>num;
        switch(num)
        {
            case 1:
                cout<<"You chose Rock"<<endl;
                Roc++;    
                    if(ans == 1)
                    {
                        cout<<"It's a tie"<<endl;
                        cout<<"CPU and you both chose Rock"<<endl;
                        ties++;
                    }
                    else if(ans == 2)
                    {
                        cout<<"Sorry you lost"<<endl;
                        cout<<"CPU chose Paper"<<endl;
                        losses++;
                    }
                    else if(ans == 3)
                    {
                        cout<<"You win!"<<endl;
                        cout<<"CPU chose Scissors"<<endl;
                        wins++;
                    }
               break;
            case 2:
               cout<<"You chose Paper"<<endl;
               Pap++;     
                   if(ans == 1)
                   {
                        cout<<"You win!"<<endl;
                        cout<<"CPU chose Rock"<<endl;
                        wins++;
                   }
                   else if(ans == 2)
                   {     
                        cout<<"It's a tie"<<endl;
                        cout<<"CPU and you both chose Paper"<<endl;
                        ties++; 
                   }
                   else if(ans == 3)
                   {
                    cout<<"Sorry you lost"<<endl;
                    cout<<"CPU chose Scissors"<<endl;
                    losses++;
                   } 
              break;
         case 3:
            cout<<"You chose Scissors"<<endl;
            Scis++;   
               if(ans == 1)
                {
                    cout<<"Sorry you lost"<<endl;
                    cout<<"CPU chose Rock"<<endl;
                    losses++;
                }
                else if(ans == 2)
                {
                    cout<<"You won!"<<endl;
                    cout<<"CPU chose Paper"<<endl;
                    wins++;
                }
                else if(ans == 3)
                {
                    cout<<"It's a tie"<<endl;
                    cout<<"CPU and you both chose Scissors"<<endl;
                    ties++;
                }
              break;
         default:
            cout<<num<<" is not a valid choice"<<endl;
            cout<<endl;
         
        } 
        cout<<"-----------------------------------------------------------"<<endl;
        cout<<"Would you like to play again? (Press Y for yes or N for no)"<<endl; 
		cout<<"-----------------------------------------------------------"<<endl;
        cin>>input;
		
		if(input == "Y")
         {
            gameOver = false;
         }
         else
         {
            cout<<"Player Stats:"<<endl;
            cout<<"You played "<<games<<" time(s)"<<endl;
            cout<<"You won "<<wins<<" time(s)"<<endl;
            cout<<"You tied "<<ties<<" time(s)"<<endl;
            cout<<"You lost "<<losses<<" time(s)"<<endl;
            cout<<"You played Rock "<<Rock<<" time(s)"<<endl;
            cout<<"You played Paper "<<Paper<<" time(s)"<<endl;
            cout<<"You played Scissors "<<Scissors<<" time(s)"<<endl;
            cout<<"Thanks for playing!"<<endl;
            return 0;
         } 
}
if(input != "Y")
{
    gameOver = true;
}

return 0;
}


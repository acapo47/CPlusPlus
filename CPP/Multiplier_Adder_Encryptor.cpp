#include <iostream>

using namespace std;

int main()
{
   char ascii;
   int mult;
   int adder;
   
   cout<<"Enter in a character"<<endl;
   cin>>ascii;
   
   cout<<"What is your multiplier?"<<endl;
   cin>>mult;
   
   cout<<"What is your adder?"<<endl;
   cin>>adder;
   
   cout<<"Encrypted: "<<(int)ascii * (int)mult + (int)adder<<endl;
   
   return 0;
}
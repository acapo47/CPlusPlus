#include<iostream>
#include<iomanip>
#include "Time.h"

using namespace std;

//TIME CLASS DEFINITION
Time::Time(int h, int m) //constructor
  : hour(h), minute(m) //initialization list
{
}

void Time::display()
{
  cout << hour << ':' << setw(2) << setfill('0') << minute << endl;
  setfill(' ');
}


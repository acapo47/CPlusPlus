#include<iostream>
#include<iomanip>
#include "Date.h"

using namespace std;


//DATE CLASS DEFINITION
Date::Date(int m, int d, int y) //constructor
  : month(m), day(d), year(y) //initialization list
{
}

void Date::display()
{
  cout << month << '/' << day << '/' << year << endl;
}


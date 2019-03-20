#include"Student.h"
#include<iostream>
using namespace std;
//Student CLASS DEFINITION
Student::Student(string nm, string yr, float g) //constructor
  : name(nm), year(yr), gpa(g) //initialization list
{
}

void Student::boost_grade()
{
  gpa+=1.0;
  if(gpa > 4.0)
    gpa=4.0;
}

void Student::display()
{
  cout << "Student Record" << endl;
  cout << "--------------" << endl;
  cout << "Name: " << name << endl;
  cout << "Academic Level: " << year << endl;
  cout << "GPA: " << gpa << endl;
}

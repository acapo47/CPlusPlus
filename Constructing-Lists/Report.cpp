#include "Report.h"
#include <iostream>
#include "Date.h"
#include "Time.h"

using namespace std;

//Report Class Definitions

Report::Report(int month, int day, int year, int hour, int minute, std::string desc)
  : rep_date(month, day, year), rep_time(hour, minute), rep_desc(desc)
{
}

void Report::display() {
  cout << "Report date: ";
  rep_date.display();

  cout << "Report time: ";
  rep_time.display();

  cout << "Report desc: " << rep_desc << endl;
}

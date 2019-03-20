#ifndef REPORT_H
#define REPORT_H
#include <string>
#include <iostream>
#include "Date.h"
#include "Time.h"

//Report Class Declaration

class Report
{
  private:
    std::string rep_desc;
    Date rep_date;
    Time rep_time;

  public:
    Report(int, int, int, int, int, std::string);
    void display();

};
#endif

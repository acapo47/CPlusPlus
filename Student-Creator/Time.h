#ifndef TIME_H
#define TIME_H

using namespace std;

//TIME CLASS DECLARATION
class Time {
  public:
    Time(int h, int m); //constructor
    void display();
  private:
    int hour;
    int minute;
};

#endif

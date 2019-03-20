#ifndef DATE_H
#define DATE_H 

using namespace std;

//DATE CLASS DECLARATION
class Date {
  public:
    Date(int m, int d, int y); //constructor
    void display();
  private:
    int month;
    int day;
    int year;
};

#endif

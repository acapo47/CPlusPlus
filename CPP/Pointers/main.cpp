#include <iostream>
using namespace std;
#include "list.h"

int main()
{
    int number;
    List list;

    while(cin>>number)
    {
        list.insert_at_end(number);
        //list.insert(number);
    }

    list.print();
    list.sum();

    return 0;
}

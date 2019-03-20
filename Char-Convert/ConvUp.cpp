#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

inline void strtoupper(char* str)
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}

int main()
{
    int userInput;


    cout<<"Enter in a line to shout"<<endl;
    cin>>userInput;
    cout<<userInpu<<endl;
    return 0;
}


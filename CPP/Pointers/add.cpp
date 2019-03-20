#include <iostream>
#include <stdlib.h>
using namespace std;

bool legal_int(char *str)
{
    while(*str != 0)
    {
        if(!isdigit(*str))
        {
            return false;
        }
        str++;
    }
    return true;
}
int main(int argc, char *argv[])
{
    int i = 0;
    int a = 0;
    
    if(argc > 1) 
    {
        if(legal_int(argv[i]))
        {
            for(int i = 1; i < argc; i++)
            {
                a += atoi(argv[i]);
            }
            cout << a << endl;
        }
        else
        {
            cerr << "Error: illegal integer." << endl;
            return 1;
        }
    }
    

    //cout << "replace this with code with code that adds are the arguments\n";
}

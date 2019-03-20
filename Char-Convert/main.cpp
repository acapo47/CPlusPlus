#include <iostream>
#include <string>
#include <ctype.h>
#include <cstring>

using namespace std;

void convert_to_uppercase(char str[])
{
    for (int x = 0; x <strlen(str); x++)
    {
        if (str[x] >= 97 && str[x] <= 126)
        {
            str[x] -= 32;
        }
    }
}

int main()
{
    char text[100];

    cout<<"Please enter a string to shout:"<<endl;
    cin.getline(text, 100);

    convert_to_uppercase(text);

    cout<<text<<endl;
}



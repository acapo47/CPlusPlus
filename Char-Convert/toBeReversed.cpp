#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string toBeReversed;
    cout<<"Please enter a string to reverse:"<<endl;
    getline(cin, toBeReversed);

    //cout<<toBeReversed<<endl;

    reverse(toBeReversed.begin(),
            toBeReversed.end());

    cout<<toBeReversed<<endl;

    return 0;
}



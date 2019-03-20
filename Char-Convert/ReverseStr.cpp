#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void reverseStr(string& x)
{
    reverse(x.begin(), x.end());
}

int main()
{
    cout<<"Please enter a string to reverse:"<<endl;
    string userInput;
    cin>>userInput;
    //cout<<userInput<<endl;
    reverseStr(userInput);
    cout<<userInput<<endl;
    return 0;
}


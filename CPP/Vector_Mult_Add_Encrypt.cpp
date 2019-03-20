#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main()
{
    int mult;
    int adder;
    int asciiVal;
    char asciiChar;
    vector<int> code;
    string sent;

    cout<<"What is your multiplier?"<<endl;
    cin>>mult;

    cout<<"What is your adder?"<<endl;
    cin>>adder;
    cin.ignore();

    cout<<"Enter in a sentence you want encrypted"<<endl;
    getline(cin,sent);

    for(int i=0; i < sent.length(); ++i)
    {
        asciiChar = sent[i];
        asciiVal = asciiChar;
        code.push_back(asciiVal*mult+adder);
    }

    cout<<"Encrytped: "<<endl;
    for(int i=0; i < code.size(); ++i)
    {
        cout<<code[i]<<" ";
    }
    cout<<endl;
    return 0;
}
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    vector<string> groceryList;
    string item;

    cout<<"Enter in your shopping list.  Enter in * to indicate you are done"<<endl;
    while(item != "*")
{
    getline(cin,item);
    groceryList.push_back(item);
}

cout<<"Here is your list:"<<endl;

for(int i=0; i < groceryList.size() - 1; ++i)
{
    cout<<groceryList[i]<<endl;
}

  return 0;
}
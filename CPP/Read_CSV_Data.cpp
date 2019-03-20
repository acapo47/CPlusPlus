#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	string namesFirst[3];
	string namesLast[3];
	int numbers[3];
	int personNumber = 1;
	ofstream data;
	for(int i=0;i<3;i++)
	{
		cout<<"Enter the first name of person number ";
		cout<<personNumber<<endl;
		cin>>namesFirst[i];
		cout<<"Enter the last name of person number ";
		cout<< personNumber<<endl;
		cin>>namesLast[i];
		cout<<"Enter the favorite number of ";
		cout<<personNumber<<endl;
		cin>>numbers[i];
		personNumber++;
	}
	data.open("data.csv", ofstream::trunc);
	if( !data.is_open() )
	{
		cerr<<"Cant open data.csv, will now self ";
		cerr<<"distruct!"<<endl;
		return 1;
	}
	for(int i = 0; i<3; i++)
	{
		data<<namesFirst[i]<<',';
		data<<namesLast[i]<<',';
		data<<numbers[i]<<endl;
	}
	data.close();
	return 0;



}

#include <iostream> 
#include <fstream> 

using namespace std;
int main() 

{ 

int i; 
string line;
ifstream outf ("test.txt");

if( !outf.is_open())
{
    cerr<<"Can't open test.txt. Im so ashamed!"<<endl;
    return 1; 
}
else {
    
    //cout<<"Success"<<endl;
    while( getline (outf,line) )
    { 
    cout<<"string1: "<<line<<endl;

        cout<<line<<'\n';

    }
outf.close();

return 0; 
}
}


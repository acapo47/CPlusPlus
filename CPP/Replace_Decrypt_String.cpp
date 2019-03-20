#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>

using namespace std;

string replace_sentence(string s)
{
    if(s.find("barn") != string::npos)
    {
        s.replace(s.find("barn"), 4, "Galactica");
    }
    if(s.find("toaster") != string::npos)
    {
        s.replace(s.find("toaster"), 7, "Cylon");
    }
    if(s.find("juice") != string::npos)
    {
        s.replace(s.find("juice"), 5, "fuel");
    }
    if(s.find("wagon") != string::npos)
    {
        s.replace(s.find("wagon"), 5, "viper");
    }
    return s;
}

int main()
{


    string line;

    fstream myFile ("stage3.txt"); 
    ofstream newFile ("decrypted.txt");

    getline (myFile, line);

    line = replace_sentence(line);

    newFile<<line;
    
    myFile.close();
    newFile.close();
    return 0; 
}



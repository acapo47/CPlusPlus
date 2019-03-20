//Decryptor 
//Decrypts messages from a file and re-outputs them
//Anthony Capo
//Date Created: 10/6/14
//Date Last Modified: 10/10/14

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std; 

string reverse_sentence(string& s)
{
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    string line;
    
    fstream myFile;
    ofstream newFile ("stage2.txt");
 
   // newFile.open("stage2.txt");
    myFile.open("messages.txt");
    
    getline(myFile, line);

    line =  reverse_sentence(line);
    newFile<<line;
    myFile.close();
    newFile.close();

    return 0;
}


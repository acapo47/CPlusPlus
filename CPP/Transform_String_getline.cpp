#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>

using namespace std;

string normalize_sentence(string s)
{
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    std::transform(s.begin(), s.begin() + 1, s.begin(), ::toupper);
    return s;
}

int main()
{
    string line;
    
    fstream myFile ("stage2.txt");
    ofstream newFile ("stage3.txt");

    getline(myFile, line);

    line = normalize_sentence(line);

    newFile<<line;

    return 0;
}


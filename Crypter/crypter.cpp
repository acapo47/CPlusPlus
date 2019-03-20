#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include "rotors.h"
#include "crypter.h"

using namespace std;

Crypter::Crypter(string rotors)

{
    int multdiv;
    int addsub;
    //long asciiVal;
    //char asciiChar;
    ifstream inFile;
    inFile.open(rotors.c_str());
    if(inFile.is_open())
    {
        while(!inFile.eof())
        {
            inFile>>multdiv;
            inFile>>addsub;

            _rotor.push_back(Rotor(multdiv, addsub));
        }
    }

    inFile.close();
}

long msg_to_code(char ch)
{
    long asciiVal = ch;
    for (int i = 0; i < _rotor.size(); ++i)
    {
       asciiVal =  _rotor[i].encode(asciiVal);

       return asciiVal;
    }
}

char code_to_msg(long i)
{
    char asciiChar = i;
    for (int i = _rotor.size(; i>0; --i)
    //for (int i = 0; i < _rotors.size(); ++i)
    {
        asciiChar = _rotor[i].decode(asciiChar);

        return asciiChar;
    }
}


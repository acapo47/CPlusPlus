#ifndef CRYPTER_H
#define CRYPTER_H
#include <iostream>
#include <string>
#include <vector>
#include "rotors.h"
#include "crypter.h"

using namespace std;

class Rotor;

class Crypter
{
private:
    vector<Rotor> _rotor;

public:
    Crypter(string rotors);
    char code_to_msg(long i);
    long msg_to_code(char ch);
};

#endif // CRYPTER_H

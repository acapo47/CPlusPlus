#ifndef ROTORS_H
#define ROTORS_H
#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
#include "crypter.h"

class Crypter;

class Rotor
{
private:
    int _mult;
    int _add;

public:
    Rotor(int mult, int add);
    long encode(long msg);
    long decode(long msg);
};
#endif

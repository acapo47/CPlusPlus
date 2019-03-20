#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
#include "crypter.h"
#include "rotors.h"

using namespace std;

Rotor::Rotor(int mult, int add)
    : _mult(mult), _add(add)
    {
    }

long Rotor::encode(long msg)
{
    msg = msg * mult + add;

    return msg;
}

long Rotor::decode(long msg)
{
    msg = (msg - add) / mult;

    return msg;
}

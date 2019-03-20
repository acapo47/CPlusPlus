#ifndef KNIGHT_H
#define KNIGHT_H
#include <string>
#include "weapon.h"

using namespace std;

class weapon;

class knight
{
private:
    string _name;
    int _stamina;
    int _maxStamina;
    bool _onHorse;
    bool _isExhausted;
    weapon* k_weapon;

public:
    knight(string _name, int _maxStamina, string _weaponType, int _staminaCost, int _hitChance);
    ~knight();
    bool is_onHorse(bool didHit);
    string get_name();
    int get_staminaCost();
    bool hit();
    bool subStamina();

    void display();

};

#endif // KNIGHT_H

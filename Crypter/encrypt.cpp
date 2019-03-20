#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include "rotors.h"
#include "crypter.h"

using namespace std;

int main()
{
   Crypter crypter("rotors.txt");
   string message;
   getline(cin, message)

   cout<<crypter.msg_to_code<<" ";

   return 0;
}

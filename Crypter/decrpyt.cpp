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
    long code;
    while(code != 0)
    {
        code = crypter.code_to_msg(code);
        char letter = code
        cout<<letter<<endl;
        cin>>code;
    }

return 0;
}


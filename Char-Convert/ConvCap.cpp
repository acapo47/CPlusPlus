#include <iostream>
#include <string>

void capital(std::string &name)
{
    int x;
    for(x = 0; x <= name.size()-1; x++)

        if((name.at(x) >= 'a') && (name.at(x) <= 'z'))
            name.at(x) -= 32;
}


int main(int argc, const char * argv[])
{
int input
    
    cin>>input;
    std::string test;
    test = input;
    capital(test); 
    std::cout<<test<<std::endl;
    return 0;
}


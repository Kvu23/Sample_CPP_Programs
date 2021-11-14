#include <bits/stdc++.h>
using namespace std;

/*
this is Example of Derived class
Constructor.
*/


class One{
    public:
    One(void){
        cout << "Class One constructor is called\n";
    }
};

class Two: public One{
    public:
    Two(void){
        cout << "Class Two constructor is called\n";
    }
};

class Three: public One{
    public:
    Three(void){
        cout << "Class Three constructor is called\n";
    }
};

class Four: public Two, public Three{
    public:
    Four(void){
        cout << "Class Four constructor is called\n";
    }
};

int main(int argc, char const *argv[])
{
    Four f4;
    return 0;
}


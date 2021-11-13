#include <iostream>
using namespace std;

class Base{
    public:
        void Greet(void)
        {
            cout<<"Hello there from Base\n";
        }
};

class Derived:public Base{
    public:
        void Greet(void)
        {
            cout<<"Hello there from Derived\n";
        }
};

int main(int argc, char const *argv[])
{
    Derived d;
    Base b;
    b.Greet();
    d.Greet(); //This will Automatically overwrite base class function call in heritance

    return 0;
}
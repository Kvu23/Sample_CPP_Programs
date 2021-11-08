#include <iostream>
using namespace std;

class Base
{
private:
    /* data */
    int a;

protected:
    int b;

public:
    Base()
    {
        a = 10;
        b = 20;
    }
};

class Derive : protected Base
{
public:
    // can not access private member of base class by method of derived class
    void display(void)
    {
        // cout << "value of a is " << a << endl;
        cout << "value of b is " << b << endl;
    }
};

int main(int argc, const char *argv[])
{
    Derive d;
    // cout<<d.b; //this can not work because b is protected can not directly access
    d.display();
    return 0;
}

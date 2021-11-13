#include <iostream>
using namespace std;

class Base1
{
private:
    /* data */
public:
    void Say(void)
    {
        cout << "How are you" << endl;
    }
};

class Base2
{
private:
    /* data */
public:
    void Say(void)
    {
        cout << "Kaise Ho..?" << endl;
    }
};

class Derived : public Base1, public Base2
{
private:
    int a;

public:
    void Say(void)
    {
        Base2::Say(); //To resolve ambiguity create same function and provide class name while calling functions
    }
};

int main(int argc, char const *argv[])
{
    Base1 obj1;
    Base2 obj2;
    Derived d;

    obj1.Say();
    obj2.Say();

    d.Say(); /// thi is example of ambiguity as both base class having same functions
    return 0;
}


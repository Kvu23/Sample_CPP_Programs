#include <bits/stdc++.h>
using namespace std;

/*
This is example of constructor in derived class
*/

class Base1
{
private:
    /* data */
    int Data1;

public:
    Base1(int i)
    {
        Data1 = i;
        cout << "Base 1 class constructor called" << endl;
    }

    void printDataBase1(void)
    {
        cout << "Value of Data1 in base class 1 is : " << Data1 << endl;
    }
};

class Base2
{
private:
    /* data */
    int Data2;

public:
    Base2(int i)
    {
        Data2 = i;
        cout << "Base 2 class constructor called" << endl;
    }

    void printDataBase2(void)
    {
        cout << "Value of Data2 in base class 2 is : " << Data2 << endl;
    }
};

class Derived : public Base1, public virtual Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)//syntax for calling constructor of base class in derived class
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called" << endl;
    }
    void printDataDerived(void)
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main(int argc, char const *argv[])
{
    Derived Kaushik(4,5,6,7);
    Kaushik.printDataBase1();
    Kaushik.printDataBase2();
    Kaushik.printDataDerived();
    return 0;
}
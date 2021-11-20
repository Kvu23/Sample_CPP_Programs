#include <bits/stdc++.h>
using namespace std;

class A
{
    int a;

public:
    void SetData(int a)
    {
        // a = a; will not work properly actually
        this->a = a;
    }
    
    // A & SetData(int a) //will return reference of class variable
    // {
    //     // a = a; will not work properly actually
    //     this->a = a;
    //     return *this;
    // }

    void GetData(void)
    {
        cout<<"the value of a is: "<<a<<endl;
    }
};

int main(int argc, char const *argv[])
{
    A obj;
    obj.SetData(5);
    obj.GetData();
    return 0;
}
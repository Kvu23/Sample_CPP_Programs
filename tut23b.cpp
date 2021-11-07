#include <iostream>
using namespace std;

class Base
{
private:
    /* data */
    int Data1;

public:
    int Data2;
    void SetData(void);
    int GetData1(void);
    int GetData2(void);
};

void Base::SetData(void)
{
    Data1 = 10;
    Data2 = 20;
}

int Base::GetData1(void)
{
    return Data1;
}

int Base::GetData2(void)
{
    return Data2;
}

class Derive : private Base
{
private:
    int Data3;

public:
    void Display(void);
    void process(void);
};

void Derive::process(void)
{
    SetData();
    Data3 = Data2 * GetData1();
}

void Derive::Display(void)
{
    cout << "value of Data1 = " << GetData1() << endl;
    cout << "value of Data2 = " << Data2 << endl;
    cout << "value of Data3 = " << Data3 << endl;
}

int main(int argc, const char *argv[])
{
    Derive Obj;

    // Obj.SetData();
    Obj.process();
    Obj.Display();

    return 0;
}

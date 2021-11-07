#include <iostream>
using namespace std;

int Num;

int &test()
{
    return Num;
}

int main(int argc, const char *argv[])
{
    test() = 6;

    cout << "value of Num is: "<<Num<<endl;

    return 0;
}

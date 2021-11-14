#include <bits/stdc++.h>
using namespace std;

/*
This is an Example of constructor 
initializator
*/

class Sample
{
private:
    int Data1;
    int Data2;

public:
    // Sample(int val1, int val2): Data1(val1), Data2(val2)
    // Sample(int val1, int val2): Data1(val1), Data2(val1+val2)
    // Sample(int val1, int val2): Data1(val1), Data2(Data1+val2)
    // Sample(int val1, int val2): Data2(val2), Data1(Data2+val1) Data1 declaration is first so it will have garbage value
    // Sample(int val1, int val2): Data2(val2), Data1(Data2+val1)
    Sample(int val1, int val2): Data1(val1)
    {
        Data2 = val2;
        cout << "Constructor Executed \n";
        cout << "Value of Data1 is: " << Data1 << endl;
        cout << "Value of Data2 is: " << Data2 << endl;
    }
};

int main(int argc, char const *argv[])
{
    Sample obj(10, 20);
    return 0;
}
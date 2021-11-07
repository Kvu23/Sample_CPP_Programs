#include <iostream>
using namespace std;
/*Forward declaratiom*/
class Y;

class X
{
    int Data;
    friend int Add(X, Y);

public:
    void indata(int num)
    {
        Data = num;
    }
};

class Y
{
    int Data;
    friend int Add(X, Y);

public:
    void indata(int num)
    {
        Data = num;
    }
};

int Add(X o1, Y o2)
{
    return (o1.Data + o2.Data);
}

int main(int argc, const char *argv[])
{
    X O1;
    Y O2;

    O1.indata(12);
    O2.indata(18);
    int res = Add(O1, O2);

    cout << "Addition of class X and Y Data is :" << res << endl;

    return 0;
}

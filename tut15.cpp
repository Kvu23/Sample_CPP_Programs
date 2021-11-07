#include <iostream>
using namespace std;

class complex
{
private:
    /* data */
    int x, y;

public:
    complex(void)
    {
        x = 0;
        y = 0;
    }

    complex(int a)
    {
        x = a;
        y = 0;
    }

    complex(int a, int b)
    {
        x = a;
        y = b;
    }

    void PrintNumber(void)
    {
        cout << "The complex number is: " << x << "+" << y << "i" << endl;
    }
};

int main(int argc, const char *argv[])
{
    complex C1;
    C1.PrintNumber();

    complex C2(5);
    C2.PrintNumber();

    complex C3(4, 7);
    C3.PrintNumber();

    return 0;
}

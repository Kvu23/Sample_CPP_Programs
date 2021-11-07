#include <iostream>
using namespace std;

class complex
{
private:
    /* data */
    int x, y;

public:
    complex(int a, int b = 9)
    {
        x = a;
        y = b;
    }

    void PrintNumber();
};

void complex::PrintNumber(void)
{
    cout << "The complex number is: " << x << "+" << y << "i" << endl;
}

int main(int argc, const char *argv[])
{
    complex C1(23, 24);
    C1.PrintNumber();

    return 0;
}

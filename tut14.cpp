#include <iostream>
using namespace std;

class Complex
{
    int x, y;

public:
    Complex(int a, int b);
    void PrintNumber(void)
    {
        cout << "The complex number is: " << x << "+" << y << "i" << endl;
    }
};

Complex::Complex(int a, int b)// this is parameterized constructor example
{
    x = a;
    y = b;
}

int main(int argc, const char *argv[])
{
    // implicit call
    Complex C1(1, 2);
    C1.PrintNumber();

    // Explicit call for constructor
    Complex C2 = Complex(5, 6);
    C2.PrintNumber();

    return 0;
}

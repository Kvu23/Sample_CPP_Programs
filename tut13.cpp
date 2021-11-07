#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void);
    ~Complex(void);

    void printData()
    {
        cout << "the complex number value is :" << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(void) // default constructor
{
    a = 10;
    b = 22;
    cout << "Hello World from Constructor " << endl;
}

Complex::~Complex(void) // default constructor
{
    a = 0;
    b = 0;
    cout << "Hello World from Destructor " << endl;
}

int main(int argc, const char *argv[])
{
    Complex C1, C2, C3;
    C1.printData();
    C2.printData();
    C3.printData();

    return 0;
}

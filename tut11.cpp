#include <iostream>
using namespace std;

//forward declaration
class Complex;

class Calculator
{
public:
    int SumRealcomplex(Complex, Complex);
    int SumCompcomplex(Complex, Complex);
};

class Complex
{
    int a, b;
    //friend int Calculator::SumRealcomplex(Complex , Complex );
    //friend int Calculator::SumCompcomplex(Complex , Complex );
    friend class Calculator;

public:
    //friend class Calculator;
    void SetNumber(int num1, int num2);
};

void Complex::SetNumber(int num1, int num2)
{
    a = num1;
    b = num2;
}

int Calculator::SumRealcomplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator::SumCompcomplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main(int argc, const char *argv[])
{
    Complex O1, O2;
    O1.SetNumber(1, 4);
    O2.SetNumber(5, 7);

    Calculator Calc;

    int res = Calc.SumRealcomplex(O1, O2);
    cout << "sum of Complex real part is: " << res << endl;

    int resc = Calc.SumCompcomplex(O1, O2);
    cout << "Sum of Complex Comp part is: " << resc << endl;

    return 0;
}

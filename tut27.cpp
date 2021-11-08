#include <iostream>
#include <cmath>

using namespace std;

class SimpleCalculator
{
protected:
    /* data */
    double Data1;
    double Data2;

public:
    // this is default constructor to initialize numbers
    SimpleCalculator(void) { Data1 = Data2 = 0; }
    void SetNumber(double, double);
    double Addition(void);
    double Substraction(void);
    double Multiplication(void);
    double Division(void);
    void DisplaySimpleOPresults(void);
};

void SimpleCalculator ::SetNumber(double num1, double num2)
{
    Data1 = num1;
    Data2 = num2;

    cout << "data1 and Data2 values are : "<<Data1<<" "<<Data2<<endl;
}

double SimpleCalculator ::Addition(void)
{
    return Data1 + Data2;
}

double SimpleCalculator ::Substraction(void)
{
    return Data1 - Data2;
}

double SimpleCalculator ::Multiplication(void)
{
    return Data1 * Data2;
}

double SimpleCalculator ::Division(void)
{
    return Data1 / Data2;
}

void SimpleCalculator ::DisplaySimpleOPresults(void)
{
    cout << "Results operation of Simple Calculators are: " << endl;
    cout << "Addition of " << Data1 << " + " << Data2 << " is " << Addition() << endl;
    cout << "Substraction of " << Data1 << " - " << Data2 << " is " << Substraction() << endl;
    cout << "Multiplication of " << Data1 << " * " << Data2 << " is " << Multiplication() << endl;
    cout << "Division of " << Data1 << " / " << Data2 << " is " << Division() << endl;
}

class ScientificCalculator
{
protected:
    /* data */
    double num1;
    double num2;

public:
    // this is default constructor to initialize numbers
    ScientificCalculator(void) { num1 = num2 = 0; }
    void Setnumber(double, double);
    double CalculateSqrt(void);
    double CalculatePow(void);
    double CalculateExp(void);
    double CalculateFloor(void);
    void DisplayScientificOPresults(void);
};

void ScientificCalculator ::Setnumber(double Data1, double Data2)
{
    num1 = Data1;
    num2 = Data2;
    cout << "num1 and num2 values are : "<<num1<<" "<<num2<<endl;
}

double ScientificCalculator ::CalculateSqrt(void)
{
    return sqrt(num1);
}

double ScientificCalculator ::CalculateFloor(void)
{
    return floor(num1);
}

double ScientificCalculator ::CalculateExp(void)
{
    return exp(num2);
}

double ScientificCalculator ::CalculatePow(void)
{
    return pow(num1, num2);
}

void ScientificCalculator ::DisplayScientificOPresults(void)
{
    cout << "Results operation of Scientific Calculators are: " << endl;
    cout << "square root of " << num1 << " is " << CalculateSqrt() << endl;
    cout << "floor of " << num1 << " is " << CalculateFloor() << endl;
    cout << "Exp of " << num2 << " is " << CalculateExp() << endl;
    cout << "Power of " << num1 << " ^ " << num2 << " is " << CalculatePow() << endl;
}

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void DisplayResults(void)
    {
        // cout << "Results operation of Simple Calculators are: " << endl;
        // cout << "Addition of " << Data1 << " + " << Data2 << " is " << Addition(Data1, Data2);
        // cout << "Substraction of " << Data1 << " + " << Data2 << " is " << Substraction(Data1, Data2);
        // cout << "Multiplication of " << Data1 << " + " << Data2 << " is " << Multiplication(Data1, Data2);
        // cout << "Division of " << Data1 << " + " << Data2 << " is " << Division(Data1, Data2);
        DisplaySimpleOPresults();
        DisplayScientificOPresults();

        // cout << "Results operation of Scientific Calculators are: " << endl;
        // cout << "square root of " << num1 << " is " << CalculateSqrt(num1) << endl;
        // cout << "floor of " << num1 << " is " << CalculateFloor(num1) << endl;
        // cout << "Exp of " << num2 << " is " << CalculateExp(num2) << endl;
        // cout << "Power of " << num11 << " ^ " << num2 << " is " << CalculatePow(num1, num2) << endl;
    }
};

int main(int argc, const char *argv[])
{
    HybridCalculator Obj;
    Obj.SetNumber(10.0, 2.5);
    Obj.Setnumber(45.5, 6.5);
    Obj.DisplayResults();
    return 0;
}

// this is sample programs of calculator using inheritance..

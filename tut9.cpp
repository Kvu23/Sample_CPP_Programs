#include <iostream>
using namespace std;

class complex
{
private:
    int a;
    int b;

public:
    void Getdata(int V1, int V2)
    {
        a = V1;
        b = V2;
    }

    void DisplaybySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void displayNumber()
    {
       cout <<"Sum of complex number is "<< a <<"+"<<b<<"i"<<endl;  
    }
};

int main(int argc, const char *argv[])
{
    complex c1,c2,c3;
    c1.Getdata(1,2);
    c2.Getdata(3,4);

    c3.DisplaybySum(c1, c2);
    c3.displayNumber();
        
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    /* data */
    int real, imaginary;
public:
    void SetData(int a, int b)
    {
        real = a;
        imaginary = b;
    }

    void GetData(void)
    {
        cout << "Real Data is: "<<real<<endl;
        cout << "imaginary Data is: "<<imaginary<<endl;
    }   
};

int main(int argc, char const *argv[])
{
    //Complex C1;
    // C1.SetData(1,54);
    // C1.GetData();

    // Complex *ptr = &C1;
    // (*ptr).SetData(1,54);
    // (*ptr).GetData();

    Complex *ptr = new Complex[3]; // Create array of objects 
    ptr->SetData(1,54);
    ptr->GetData();
    ptr++;
    ptr->SetData(5,10);
    ptr->GetData();
    ptr++;
    ptr->SetData(10,30);
    ptr->GetData();

    return 0;
}
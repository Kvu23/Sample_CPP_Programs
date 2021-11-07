#include <iostream>
using namespace std;

class C2;

class C1
{
    int Data;
    friend void Swap(C1 &, C2 &);
public:
    void inputData(int Value)
    {
        Data = Value;
    }

    void Printnumber(void)
    {
        cout<<"Set value of class C1 private data member is: "<< Data <<endl;
    }
};

class C2
{
    int Data;
    friend void Swap(C1 &, C2 &);
public:
    void inputData(int Value)
    {
        Data = Value;
    }  
      
    void Printnumber(void)
    {
        cout<<"Set value of class C2 private data member is: "<< Data <<endl;
    }    
};

void Swap(C1 &o1, C2 &o2)
{
    int tmp;
    tmp = o1.Data;
    o1.Data = o2.Data;
    o2.Data = tmp;
}


int main(int argc, const char *argv[])
{
    C1 O1;
    C2 O2;

    O1.inputData(22);
    O2.inputData(33);

    cout << "Before swapping Data of Class C1 and C2 are: "<<endl;
    O1.Printnumber();
    O2.Printnumber();
        
    Swap(O1 , O2);
    
    cout << "After swapping Data of Class C1 and C2 are: "<<endl;
    O1.Printnumber();
    O2.Printnumber();

    return 0;
}

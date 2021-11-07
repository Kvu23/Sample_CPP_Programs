#include <iostream>
using namespace std;

class Number
{
private:
    /* data */
    int a;
public:
    Number(int num)
    {
        a = num;
    }
    
    Number()
    {
        a = 0;
    }
    
    Number(Number &obj)
    {
        cout << "Copy constructor Called!!!!!\n";
        a = obj.a;
    }

    void Display(void)
    {
        cout << "The number of object is: "<< a << endl;
    }    
};


int main(int argc, const char *argv[])
{
    Number x,y,z(10) ;
    x.Display();
    y.Display();
    z.Display();

    // t = z; //copy constructor will not invoke if object is already present before
    // Number t = z; //copy constructor will invoke if object is not already present before
    Number t(z); //copy constructor will invoke if object is not already present before
                //  compiler supply default copu constructor to all class no error will happen
    t.Display();

    return 0;
}

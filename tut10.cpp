#include <iostream>
using namespace std;

class Box
{
    double width;

public:
    friend void Printwidth(Box box);
    void setWidth(double wid);
};

void Box::setWidth(double wid)
{
    //Assign box width
    width = wid;
}

void Printwidth(Box box)
{
    cout<< "Width of the box is: "<<box.width<<endl;
}


int main(int argc, const char *argv[])
{
    Box box;
    box.setWidth(2.456);
    Printwidth(box);

    return 0;
}

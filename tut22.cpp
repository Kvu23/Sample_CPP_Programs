#include <iostream>
using namespace std;

class Test
{
private:
    /* data */
    int x,y;
public:
    Test(int x, int y)
    {
        cout<< "constructor called\n";
        this->x = x;
        this->y = y;
    }
    // Test(){x= y =0;cout<<"default constructor called\n\n";}
    Test &setX(int a){this->x = a; return *this;}
    Test &setY(int b){this->y = b; return *this;}

    void ShowData(void)
    {
        cout << "x: "<<x<<" y: "<<y<<endl;
    }
};


int main(int argc, const char *argv[])
{
    Test t1;
    t1.ShowData();
    t1.setX(10).setY(20);
    t1.ShowData();

    return 0;
}

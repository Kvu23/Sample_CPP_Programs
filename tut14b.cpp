#include <iostream>
#include <math.h>

using namespace std;

class point
{
    double x, y;
    friend double Distance(point, point);

public:
    point(double a, double b);

    void PrintCordinate(void)
    {
        cout << "point co ordinate is : (" << x << "," << y << ")" << endl;
    }
};

point::point(double a, double b)
{
    x = a;
    y = b;
}

double Distance(point P1, point P2)
{
    double dis;

    dis = sqrt(((P2.x - P1.x) * (P2.x - P1.x)) + ((P2.y - P1.y) * (P2.y - P1.y)));
    return dis;
}

int main(int argc, const char *argv[])
{
    point P1(1, 3), P2(-2, 9);
    P1.PrintCordinate();
    P2.PrintCordinate();

    double dis = Distance(P1, P2);
    cout << "the distance between point P2 and P1 is: " << dis << endl;

    return 0;
}

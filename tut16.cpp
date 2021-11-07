#include <iostream>
using namespace std;

class BankDeposit
{
private:
    /* data */
    int Principal;
    int years;
    float interest;
    float Returnval;

public:
    BankDeposit(){};
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);

    void ShowBalance();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    Principal = p;
    years = y;
    interest = r;
    Returnval = Principal;

    for (int i = 0; i < y; i++)
    {
        /* code */
        Returnval = Returnval * (1 + interest);
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    Principal = p;
    years = y;
    interest = (float)r / 100;
    Returnval = Principal;

    for (int i = 0; i < y; i++)
    {
        /* code */
        Returnval = Returnval * (1 + interest);
    }
}

void BankDeposit::ShowBalance(void)
{
    cout << "return value of with interest rate" << interest << " and Principal amount " << Principal << "after " << years << "years is: "
         << Returnval << endl;
}

int main(int argc, const char *argv[])
{
    int p, y, R;
    float r;
    BankDeposit bd1, bd2, bd3;

    cout << "enter value of p, y ,r" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.ShowBalance();

    cout << "enter value of p, y ,r" << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.ShowBalance();

    return 0;
}

/*
Another example of constructor of constructors
where we can pass constructors as various arguments
*/

#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
    /* data */
    int age;
    string name;

public:
    Human(string myname = "Kaushik", int Age = 31)
        : name(myname), age(Age)
    {
        cout << "constructed a human called " << myname << " with age " << Age << " years old " << endl;
    }

    ~Human()
    {
        cout << "Destructor is called \n";
    }
};

int main(int argc, const char *argv[])
{
    Human kaushik;
    Human heena("Heena", 25);
    Human Rashmi("Rashmi", 36);
    return 0;
}

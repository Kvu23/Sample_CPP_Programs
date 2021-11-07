#include <iostream>
using namespace std;

class Employee
{
    // int id;
public:
    /* data */
     int id;
    float salary;
    
    Employee(){}
    Employee(int inpID)
    {
        id = inpID;
        salary = 34.123;
    }
};

class programmer : public Employee
{
public:
    /* data */
    int languageCode;

    programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }

    void GetData(void)
    {
        cout << id<<endl;
    }
};

int main(int argc, const char *argv[])
{
    Employee kaushik(1), Heena(2);
    cout << kaushik.salary << endl;
    cout << kaushik.id << endl;
    cout << Heena.salary << endl;
    cout << Heena.id << endl;

    programmer SkillF(20);    
    cout << SkillF.languageCode << endl;
    cout << SkillF.id << endl;
    SkillF.GetData();
    return 0;
}

/*
1. this is single inheritance eample
2. private member of base class can not be inherited to derived class
3. by default derived class will be inherited as private if no visibility mode is present
4. public member of base class will be private if derived class inherited privately
5. public member of base class will be public if derived class inherited publicly

*/
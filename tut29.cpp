#include <iostream>
using namespace std;

/*
This example program is of Virtual Base class
Student->Test
Student->Sports
Test-> Results
Sports-> Results

*/
class Student
{
protected:
    /* data */
    int roll_num;
public:
    void Set_RollNum(int roll_num)
    {
        this->roll_num = roll_num;
    }

    void printRollNum(void)
    {
        cout << "Student roll number is: "<<roll_num<<endl;
    }
    
};

class Test : public virtual Student
{
protected:
    float maths, physics;

public:
    void set_Marks(float M1, float M2)
    {
        maths = M1;
        physics = M2;
    }

    void printMarks(void)
    {
        cout<<"Marks of maths is: "<<maths<<endl;
        cout<<"Marks of physics is: "<<physics<<endl;
    }
    
};

class Sports : virtual public Student
{
protected:
    int Score;

public:
    void set_Score(int sc)
    {
        Score = sc;
    }

    void printScore(void)
    {
        cout<<"Your PT score  is: "<<Score<<endl;
    }
    
};

class Results : public Test, public Sports
{
protected:
    float total;

public:
    void displayMarks(void)
    {
        printRollNum();
        printScore();

        total = maths + physics + Score;

        cout<<"Your Total score  is: "<<total<<endl;
    }
};


int main(int argc, char const *argv[])
{
    Results Kaushik;
    Kaushik.Set_RollNum(15);
    Kaushik.set_Marks(75.5, 90.0);
    Kaushik.set_Score(7);
    Kaushik.displayMarks();
    return 0;
}
#include <iostream>
using namespace std;

// this is a base class
class student
{
protected:
    int roll_number;

public:
    void set_rollNum(int);
    void get_rollNum(void);
};

void student::set_rollNum(int roll_num)
{
    roll_number = roll_num;
}

void student::get_rollNum(void)
{
    cout << "Student roll number is: " << roll_number << endl;
}

// this is derived class from student
class Exam : public student
{
protected:
    float maths;
    float physics;

public:
    void setmarks(float, float);
    void getmarks(void);
};

void Exam::setmarks(float m1,float m2)
{
    maths = m1;
    physics = m2;
}

void Exam::getmarks(void)
{
    cout << "Marks obtained in maths are: " << maths << endl;
    cout << "Marks obtained in physics are: " << physics << endl;
}

// this class is further derived from Exam
class Result : public Exam
{
    float percent;

public:
    void display_results(void)
    {
        get_rollNum();
        getmarks();
        percent = (maths + physics)/2;
        cout << "your result is: " << percent << "%" << endl;
    }
};

int main(int argc, const char *argv[])
{
    Result Kaushik;
    Kaushik.set_rollNum(420);
    Kaushik.setmarks(90.0, 95.0);
    Kaushik.display_results();

    return 0;
}

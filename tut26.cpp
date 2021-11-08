#include <iostream>
using namespace std;

// This Example is related to the
//  multiple inheritance

// syntax for multiple inheritance is

// derivedC: mode Base1, mode Base2{
//     {class body here}
// };

class Base1
{
protected:
	int base1int;

public:
	Base1()
	{
		base1int = 0;
		cout << "this constructor Base1 is automatically called when we create object"
				" of derived class"
			 << endl;
	}

	void setBase1int(int a)
	{
		base1int = a;
	}
};

class Base2
{
protected:
	int base2int;

public:
	Base2()
	{
		base2int = 0;
		cout << "this constructor Base2 is automatically called when we create object"
				"of derived class"
			 << endl;
	}

	void setBase2int(int a)
	{
		base2int = a;
	}
};

class Base3
{
protected:
	int base3int;

public:
	Base3()
	{
		base3int = 0;
		cout << "this constructor Base3 is automatically called when we create object"
				"of derived class"
			 << endl;
	}

	void setBase3int(int a)
	{
		base3int = a;
	}
};

class Derived : public Base1, public Base2, public Base3
{
private:
	/* data */
	int resultData;

public:
	Derived(void) { resultData = 0; }
	void showResults(void)
	{
		cout << "the value of base1int is: " << base1int << endl;
		cout << "the value of base2int is: " << base2int << endl;
		cout << "the value of base3int is: " << base3int << endl;

		resultData = base1int + base2int + base3int;
		cout << "resultdata value is : " << resultData << endl;
	}
};

int main(int argc, const char *argv[])
{
	Derived obj1;
	obj1.setBase1int(50);
	obj1.setBase2int(30);
	obj1.setBase3int(60);
	obj1.showResults();
	return 0;
}

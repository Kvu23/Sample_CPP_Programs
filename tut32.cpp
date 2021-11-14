#include <bits/stdc++.h>
using namespace std;

/*
This Example shows usage of keyword new 
and delete to allocate and delete memry
using dynamic initialization
*/

struct Cust{

    int p;
    Cust(int q): p(q) { cout << "\n Constructor called\n";}
};

int main(int argc, char const *argv[])
{
    /*for built in data type */
    int a = 10;
    int *ptr = new(int);
    ptr = &a;

    float *fptr = new float(40.789);

    cout << "Value of a at address "<<ptr<<" is "<<*ptr<<endl;
    cout << "Value  at address "<<fptr<<" is "<<*fptr<<endl;
    
    
    /*for array */
    const int n = 10;
    int *arr = new int[n];

    if(!arr){
        cout<<"Memory allocation is failsd\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            /* code */
            arr[i] = i+1;
        }

        cout << "Value stored in block memory \n";

        for (int i = 0; i < n; i++)
        {
            /* code */
            cout << arr[i] <<" ";
        }
    }

    /*for custom data type*/
    Cust *cptr = new Cust(10);
    cout << "value at address "<<cptr<<" is "<<cptr->p<<endl;

    cout <<"\nFreeing allocated memory\n";
    delete ptr;
    delete fptr;
    delete[] arr;

    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    /*data type size*/
    // cout<<"sizeof int is: "<<sizeof(int)<<endl;
    // cout<<"sizeof unsigned int is: "<<sizeof(unsigned int)<<endl;
    // cout<<"sizeof signed int is: "<<sizeof(signed int)<<endl;
    // cout<<"sizeof short is: "<<sizeof(short)<<endl;
    // cout<<"sizeof short int is: "<<sizeof(short int)<<endl;
    // cout<<"sizeof unsigned short int is: "<<sizeof(unsigned short int)<<endl;
    // cout<<"sizeof long is: "<<sizeof(long)<<endl;
    // cout<<"sizeof unsigned long is: "<<sizeof(unsigned long)<<endl;
    // cout<<"sizeof unsigned long long is: "<<sizeof(unsigned long long)<<endl;
    // cout<<"sizeof long long is: "<<sizeof(long long)<<endl;
    // cout<<"sizeof long double is: "<<sizeof(long double)<<endl;
    // cout<<"sizeof float is: "<<sizeof(float)<<endl;
    // cout<<"sizeof char is: "<<sizeof(char)<<endl;
    // cout<<"sizeof unsigned char is: "<<sizeof(unsigned char)<<endl;
    // cout<<"sizeof wchar is: "<<sizeof(wchar_t)<<endl;

    // pointer concepts
    int a=5;
    int *b = &a;
    int **C = &b;
    cout<< "address of a is "<< &a<< endl;
    cout<< "Value of b is "<< b<< endl;
    cout<< "address of b is "<< C<< endl;
    cout<< "value of a is "<< a<< endl;
    cout<< "value of a is "<< *b<< endl;
    cout<< "value at address C is "<< *C<< endl;
    cout<< "value at address b is "<< **C<< endl;
    cout<< "value of  C is "<< C<< endl;

    








    
    return 0;
}


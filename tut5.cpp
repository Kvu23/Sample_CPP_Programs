#include<iostream>

using namespace std;

int main()
{
    /* code */
    int i = 1, number=0;
    cout << "enter number you want to print multiplication table"<<endl;
    cin>> number;
    cout << "multiplication table of " << number << " is"<<endl;

    // for ( i = 1; i <= 10; i++)
    // {
    //     /* code */
    //     cout << number<< "X" <<i<< "=" << number*i<<endl; 
    // }

    // while(i<=10){
    //    cout<< number <<"X"<<i<<"="<<number*i<<endl;
    //    i++; 
    // }

    do
    {
        /* code */
       cout<< number <<"X"<<i<<"="<<number*i<<endl;
       i++;
    } while (i<=10);
    

    return 0;
}

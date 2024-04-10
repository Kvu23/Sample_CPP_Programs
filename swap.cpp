#include<iostream>
using namespace std;
/**
 * @brief this function does swapping of the two numbers
 * 
 * @param num1 first number
 * @param num2 second number
 */
void swap(int num1, int num2)
{
    int temp=0;
    cout<<"before swapping value of num1 and num2 is "<<num1<<" "<<num2<<endl;
    temp = num1;
    num1=num2;
    num2=temp;
    cout<<"After swapping number1 and number2 is "<<num1<<" "<<num2 <<endl;   
}
/**
 * @brief this is the main functions
 * 
 * @return int retirn status 
 */
int main()
{
    int number1{123}, number2{234};
    //cout << "before swapping value of number1 and number2 is"<<number1<<" "<<number2<<endl;
    swap(number1, number2);
    //cout << "before swapping value of number1 and number2 is"<<number1<<" "<<number2<<endl;

    return 0;
}

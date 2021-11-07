#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector<string> msg{"Hello","C++","World","From","VSCode"};

    for(const string &word:msg)
    {
        cout<<word<<" ";
    }
    cout<<endl;

    // int number1{10}, number2{20}, result{0};
    // string firstname{"kaushik "}, secondname{"chauhan"};
    // result = number1 + number2;
    // cout<<"Addition of "<<number1 <<"and"<<number2 <<"is :" <<result<<endl;    
    // cout<<"your full name is "<<firstname + secondname <<endl;
    return 0;
}
#include <iostream>
using namespace std;

int count = 0;
class num
{

public:
    num() {
        count++;
        cout << "This is called when object number "<<count<<" created "<<endl;
    }

    ~num() {
        cout << "This is called when object number "<<count<<" Destroyed "<<endl;        
        count--;
    }
};

int main(int argc, const char *argv[])
{
    cout<<"Entered in main function\n";
    num N1;
    {
        cout << "enterd in the block\n";
        cout << "Creating 2 more objects\n";
        num N2,N3;
        cout <<" Exiting Block\n";
    }

    cout <<"Entered in main block again\n";    
    return 0;
}


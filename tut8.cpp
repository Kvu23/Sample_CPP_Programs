#include<iostream>
#include<vector>
#include<string>

using namespace std;

// //volume of a cylinder
// int volume(double r, int h)
// {
//     int result;
//     result = (3.14 * r *r *h);
//     return result;
// }

// //volume of a cube
// int volume(int a)
// {
//     int result;
//     result = (a * a * a);
//     return result;
// }

double largest(const double data[], size_t size)
{
    double max {data[0]};
    for(size_t i{1}; i< size;++i)
    {
        if (max < data[i])
            max = data[i];
    }
    return max;
}

double largest(const vector<double> &Data)
{
    double max {Data[0]};
    for(auto value:Data)
    {
        if (max < value)
            max = value;
    }
    return max;
}

int largest(const vector<int>&Data)
{
    int max {Data[0]};
    for(auto value:Data)
    {
        if (max < value)
            max = value;
    }
    return max;
}

string largest(const vector<string> &Data)
{
    string max_words {Data[0]};
    for(const auto &word:Data)
    {
        if(max_words < word)
            max_words = word;
    }
    return max_words;
}

int main()
{
    // cout <<"the volume of cylinder is "<<volume(3,6) <<endl;
    // cout <<"the volume of cube is "<<volume(3) <<endl;
    double arr[] {1.5,44.6,13.7,6.7,21.2};
    vector<int> numbers {15,44,13,21,6,8,5,2};
    vector<double> data{3.5,5,6,-1.2,8.7,6.4};    
    vector<string> names{"Kaushik", "Chauhan", "Heena", "Katesiya"};

    cout<<"Largest of array is "<<largest(arr, sizeof(arr))<<endl;
    cout<<"Largest of numbers is "<<largest(numbers)<<endl;
    cout<<"Largest of data is "<<largest(data)<<endl;
    cout<<"Largest of word is "<<largest(names)<<endl;
    
    
    return 0;
}

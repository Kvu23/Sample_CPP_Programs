#include <bits/stdc++.h>

using namespace std;

class ShopItem{
    private:
        int ItemId;
        float ItemPrice;
    public:
        void GetData(void)
        {
            cout<<" Item ID and price of item : "<<ItemId<<" "<<ItemPrice<<endl;
        }
        void SetData(const int id, float price)
        {
            ItemId = id;
            ItemPrice = price;
        }
};


int main(int argc, char const *argv[])
{
    const int size = 3;
    int Id;
    float Price;
    ShopItem *ptr = new ShopItem [size];
    ShopItem *temp_ptr = ptr;

    for (auto int i = 0; i < size; i++)
    {
        /* code */
        cout << "enter item Id and price for item: "<<i+1<<endl;
        cin>>Id>>Price;
        ptr->SetData(Id,Price);
        ptr++;
    }
    
    ptr = temp_ptr;
    
    for (auto int i = 0; i < size; i++)
    {
        /* code */
        cout << "Item id and price of Item: "<<i+1<<endl;
        ptr->GetData();
        ptr++;
    }
    
    ptr = temp_ptr;

    //free allocated memory
    delete temp_ptr;
    delete[] ptr;

    return 0;
}
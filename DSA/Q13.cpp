// Object Memory Allocation

#include<iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public :
        void initCounter()
        {
            counter = 0;
        }
        void setPrice();
        void displayPrice();
};

void Shop :: setPrice()
{
    cout<<"Enter id of the item "<<counter+1<<": "<<endl;
    cin>>itemId[counter];
    cout<<"Enter price of the item : "<<endl;
    cin>>itemPrice[counter];
    counter++;

}

void Shop :: displayPrice()
{
    // cout<<"Enter id of the item : "<<endl;
    // cin>>itemId[counter];
    for (int i = 0; i < counter; i++)
    {
        cout<<"ID : "<<itemId[i]<<endl<<"Price of requested item = "<<itemPrice[i]<<endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}
#include<iostream>
using namespace std;

int power(int a , int b)
{
    int product = 1;
    for (int i = 0; i < b; i++)
    {
        product = product * a;
    }
    return product;
}

int main()
{
    int num, index, result;
    cout<<"Enter you number : ";
    cin>>num;
    cout<<"Enter the power : ";
    cin>>index;
    result = power(num, index);
    cout<<result;
    return 0;
}
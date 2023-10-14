// Create the fibonacci series

#include<iostream>
using namespace std;

int fib(int num)
{
    if (num < 2)
    {
        return num;
    }
    else 
    {
        return fib(num-1) + fib(num-2);
    }
}

int main()
{
    int num1;
    cout<<"Enter you number = ";
    cin>>num1;
    cout<<fib(num1);
    return 0;
}
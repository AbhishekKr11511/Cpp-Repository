// Recursion and Recursive function

// Here is a recursive function where we calculate the factorial of an integer.
#include<iostream>
using namespace std;

int factorial (int num)
{
    int pro = 1;
    if (num > 0)
    {
        pro = num * factorial(num-1);
    }
    else
    {
        return pro;
    }
}

int main()
{
    int num1;
    cout<<"Enter a number = ";
    cin>>num1;
    cout<<"The factorial of "<<num1<<" is = "<<factorial(num1);
    return 0;
}
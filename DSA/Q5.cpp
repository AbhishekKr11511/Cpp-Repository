// Fucntions are topped down structured progaming


#include<iostream>
using namespace std;

// Below we just created a prototype of function sum()
int sum (int a , int b);
void thank();

int main()
{
    int num1 , num2;
    cout<<"Enter first number = ";
    cin>>num1;
    cout<<"Enter second number = ";
    cin>>num2;
    cout<<"The sum is = "<<sum(num1, num2)<<endl;
    thank();
    return 0;
}

// Here we later define the function.
int sum(int a , int b)
{
    int c = a+b;
    return c;
}

void thank()
{
    cout<<"Thank you."<<endl;
}
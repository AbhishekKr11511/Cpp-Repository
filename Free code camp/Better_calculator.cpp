#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"Enter operator : ";
    cin>>op;
    if (op=='+')
    {
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
        return 0;
    }
    else if (op=='-')
    {
        cout<<num1<<" - "<<num2<<" = "<<num1-num2;
        return 0;
    }
    else if (op=='*')
    {
        cout<<num1<<" * "<<num2<<" = "<<num1*num2;
        return 0;
    }
    else if (op=='/')
    {
        cout<<num1<<" / "<<num2<<" = "<<num1/num2;
        return 0;
    }
    if (op=='%')
    {
        cout<<num1<<" % "<<num2<<" = "<<num1%num2;
        return 0;
    }
    else
    {
        cout<<"Invalid operator";
        return 0;
    }
}
// Function Overloading
// We can make a function do different operations based on the data passed in the arguements

#include<iostream>
using namespace std;

int add(int a, int b)
{
    cout<<"two arguements"<<endl;
    return a+b;
}

// Does not matter even if the arg type here is float,
// int values can be passed no problem.
int add(float a, float b, float c)
{
    cout<<"three arguements"<<endl;
    return a+b+c;
}

int main()
{
    int num1, num2, num3;
    cout<<"Enter 3 number = ";
    cin>>num1>>num2>>num3;
    cout<<add(num1, num2)<<endl;        // Goes to the 2 argument function
    cout<<add(num1, num2, num3)<<endl;  // Goes to the 3 argument function
    return 0;
}
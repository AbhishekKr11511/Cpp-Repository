#include<iostream>
using namespace std;

int main()
{
    int age = 19;
    double gpa = 2.7;
    string name = "Mike";

// Creating pointer variables, and pointing them at the addresses.
    int *pAge = &age;
    double *pGpa = &gpa;
    string *pName = &name;

// This is how we access the address of the variables.
    cout <<"Age : "<< &age<<endl;
    cout <<"GPA : "<< &gpa<<endl;
    cout <<"name : "<< &name<<endl;

// This is how we access the value through the pointer variable.
    cout<<"Age value : "<<*pAge<<endl;
    cout<<"GPA value : "<<*pGpa<<endl;
    cout<<"Name value : "<<*pName<<endl;

    return 0;
}
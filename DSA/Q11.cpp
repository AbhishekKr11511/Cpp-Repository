// Objected Oriented Programming
// Class - Basic template for creating objects
// Object - Basic run time entities
// Abstraction & Encapsulation - Wrapping data and function into single unit.
// Inheritance - Properties of one class can be inherited into others.
// Polymorphism - ability to take more than one forms
// Dynamic Binding - Code which will execute is not know until the program run.
// Message Passing - Object.message(Information) call format.

// Pros of OOPs:-
// -Better code reusabilty using objects and inheritance
// -Principle of data hiding helps build secure systems
// -Multple ojects can co-exist without any interference
// -Software complexity can be earsilty managed

#include<iostream>
using namespace std;

class Employee
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int num1, int num2, int num3);
        void getData()
        {
            cout<<"The value of a is = "<<a<<endl;
            cout<<"The value of b is = "<<b<<endl;
            cout<<"The value of c is = "<<c<<endl;
            cout<<"The value of d is = "<<d<<endl;
            cout<<"The value of e is = "<<e<<endl;
        }
};

void Employee :: setData(int num1, int num2, int num3)
{
    a = num1;
    b = num2;
    c = num3;
}

int main()
{
    Employee abhishek;
    abhishek.d =23;
    abhishek.e =33;
    abhishek.setData(1,2,4);
    abhishek.getData();
//  abhishek.a ----> This won't work as variables a,b,c are private
    return 0;
}
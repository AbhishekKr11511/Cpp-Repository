// Friend Function in C++
/*
A friend class can access private and protected members
of other classes in which it is declared as a friend. 
It is sometimes useful to allow a particular class to access 
private and protected members of other classes.
*/
#include<iostream>
using namespace std;

class Complex
{
    int a,b;
    public:
        void setNumber(int n1, int n2)
        {
            a = n1;
            b = n2;
        }
        void printNumber()
        {
            cout<<"Your number is = "<<a<<" + "<<b<<"i"<<endl;
        }
    // This is how an outside function can access private variables of the class
    // We use the friend method
        friend Complex sumComplex(Complex num1, Complex num2);
};

Complex sumComplex(Complex num1, Complex num2)
{
    cout<<"sum = "<<(num1.a + num2.a)<<" + "<<(num1.b + num2.b)<<"i"<<endl;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1,4);
    c2.setNumber(5,8);
    c1.printNumber();
    c2.printNumber();
    sumComplex(c1, c2);
    return 0;
}

/*
Properties of friend function:-

- Not in the scope of native class
- Since it is not in the scope of the class, it can't be called from the object
  of that class c1.sumComplex() == Invalid
- Can be invoked without the help of any object
- Usually contain the objects as argument
- Can be declared inside public or private part of the class, doesn't matter
- I can't access the memebers diretly by their names and need object_name.member_name
  to access any member
*/
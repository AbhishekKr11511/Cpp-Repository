// Friend Class and Member Friend Function

#include<iostream>
using namespace std;

class Complex;

class Calculator
{
    public:
        int add(int a, int b)
        {
            return a+b;
        }
        int sumComplex(Complex , Complex );
};

class Complex
{
    int a,b;
    friend int Calculator :: sumComplex(Complex o1, Complex o2);
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
};

int Calculator :: sumComplex (Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int main()
{
    Complex c1, c2, sum;

    return 0;
}
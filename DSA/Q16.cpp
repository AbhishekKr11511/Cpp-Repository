#include<iostream>
using namespace std;

class Complex
{
    int a;
    int b;
    public:
        void setData(int num1, int num2)
        {
            a = num1;
            b = num2;
        }
        void setDataBySum(Complex ob1, Complex ob2)
        {
            a = ob1.a + ob2.a;
            b = ob1.b + ob2.b;
        }
        
        void printNumber()
        {
            cout<<"sum = "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main()
{
// c1 + c2 = c3 ---> This is the query
    Complex c1, c2, c3;
    c1.setData(1,3);
    c1.printNumber();
    c2.setData(3,4);
    c2.printNumber();

// Sum of the two complex numbers
    c3.setDataBySum(c1 , c2);
    c3.printNumber();

    return 0;
}
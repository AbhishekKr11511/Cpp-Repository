#include<iostream>
using namespace std;

int main()
{
// Reference Variable.
    int a = 40;
    int *b = &a;
    int &c = a;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<&a<<endl;
    cout<<&b<<endl;
    cout<<c<<endl;
    cout<<&c<<endl;
// Type Casting : To change the datatype of a variable. The follow value won't change but the data type will be modified.
    int x = 20;
    cout<<"The value of x is = "<<x<<endl;
    cout<<"The value of x is = "<<float(x)<<endl;
    cout<<"The value of x is = "<<long(x)<<endl;

    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int a = 33;
    int *b = &a;
    int **c = &b;
    // & ((Address of that variable)-> Address of operator
    // * (Value at that point)-> Dereference operator
    cout<<b<<endl<<&a<<endl;
    cout<<*b<<endl;     // This dereference to print the value at that address stored in b
    cout<<c<<endl<<&b<<endl;
    cout<<&c<<endl;
    cout<<**c<<endl;    // We dereference twice to point to the value stored at via b.
    return 0;
}
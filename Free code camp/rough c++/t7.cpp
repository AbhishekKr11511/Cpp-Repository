#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = a++;    // Prints a and increases its value
    int c = ++a;    // increases the value then prints a
    int d = a--;    // Prints a and decreases the value of a
    int e = --a;    // Decreases the value of a and then prints a
    cout << "b = "<<b<<"\n"<<"c = "<<c<<"\n"<<"d = "<<d<<"\n"<<"e = "<<e<<endl;
    return 0;
}
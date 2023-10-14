#include<iostream>
using namespace std;

int main()
{
    int a,b,temp;
    a = 10;
    b = 20;
    cout << "a = "<<a<<"\nb = "<<b<<endl;
    temp = a;
    a = b;
    b = temp;
    cout << "Swapped\na = "<<a<<"\nb = "<<b;
    return 0;
}
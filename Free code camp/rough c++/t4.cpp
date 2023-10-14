#include<iostream>
using namespace std;

int main()
{
    // 'const' keyword is used to prevent the change of value of any varaible.
    const double pi = 3.14;
    // pi = 0; -> this won't work.
    cout << pi;
    return 0;

}
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int wnum = 5;
    double dnum = 5.5;
    cout<<5.5+9<<endl;        // operation with a decimal and whole number will give a decimal number.
    cout<<10/3<<endl;         // operation b/w 2 whole numbers we always get a whole number even tho the result is a decimal number.
    cout<<pow(2,5)<<endl;     // 2^5 this means
    cout<<sqrt(9)<<endl;      // square root of 9
    cout<<floor(4.7)<<endl;   // Rounds down
    cout<<ceil(4.2)<<endl;    // Rounds up
    cout<<fmax(3,10)<<endl;  // Prints the max value out of the args (Takes only 2 arguments)
    cout<<fmin(3,10)<<endl;  // Prints the min value out of the args (Takes only 2 arguments)

}
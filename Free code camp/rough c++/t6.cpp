#include<iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 3;
    double z= x/y;
    cout <<z<<endl;   // This will yield an int value only even tho z is a double
                      // Because the operation b/w 2 int types always yields another int.
    double w = 10;
    z = w/y;          // This will work and give a double value because 'w' is a double value.
    cout << z;  
    return 0;
}
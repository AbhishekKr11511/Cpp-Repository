#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double result1 = floor(10.3);    // Rounds the value down
    double result2 = ceil(10.3);     // Rounds the value up
    cout<< result1<<"\n"<<result2<<"\n\n";

    double result3 = pow(2,4);      // Calculates the exponential value.
    cout<<result3<<endl;
    double radius,area;
    const double pi = 3.14;
    cout<<"Enter the radius of the circle = ";
    cin>>radius;
    area = pi*(pow(radius,2));
    cout<<"Area = "<<area;
    return 0;
}
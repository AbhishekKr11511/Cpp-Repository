#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter 3 values = \n";
    int x,y,z;
    cin>>x>>y>>z; // This is the input operator we use cin just like scanf in c.
                  // We chain the inputs like above in c++, thats the advantage in c++ over c.
    cout<<"The sum = "<< x+y+z;
    return 0;
}
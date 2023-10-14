// Inline Function, Default arguements

#include<iostream>
using namespace std;


// When we use inline function, its like we are,
// Inserting the complete function in the main code itself
// This is usefull as it reduces the call over head time for the function
// Increasing the efficiency of the code.

inline int product(int a , int b)
{
    return a*b;
}

int main()
{
    int a,b;
    cout<<"Enter the value of a and b = ";
    cin>>a>>b;
    cout<<"The produvt of a and b is "<<product(a,b)<<endl;
    return 0;
}
// Note :-
// Do not use inline functions when the funtion is recursive
// Do not use inline function when working with static variables

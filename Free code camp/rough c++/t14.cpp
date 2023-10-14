// This program will operate as a dice throw
// It will generate an output b/w 1 and 6


#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;

int main()
{
    int seconds = time(0);  // This is used to change the value of 'seconds'
    srand(seconds);         // Putting a different value in srand() function yields a different random value for it
//  rand() % (maxValue - minValue +1) + minvalue; -> This is the function for specify and range and minVAlue.
    short die1 = (rand() % 6) + 1;
    short die2 = (rand() % 6) + 1;
    cout<<die1<<"\n"<<die2<<endl;
    return 0;
}
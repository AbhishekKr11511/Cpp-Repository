// Generating a random number.

#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;

int main()
{
    long elapsedSeconds = time(0);  // 1 Jan 1970
    srand(elapsedSeconds);
    int number = rand() % 10 + 5;   // 10 is range and 5 is the minimum possible value
//  cout << elapsedSeconds<<endl;     // Will print the elapased seconds since 1 Jan 1970
    cout << number;
    return 0;
}
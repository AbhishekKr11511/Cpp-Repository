#include<iostream>
using namespace std;

int main()
{
    string phrase = "Hello There";
                //   0123456789     index value.
    cout<<phrase<<endl;
    cout<<phrase.length()<<endl;  // length() length of the string
    cout<<phrase[0]<<endl;        // works like an array, try putting different numbers
    cout<<phrase.find("There")<<endl;   // Finds the string to print index value of the first letter
    cout<<phrase.substr(3,5)<<endl;     // First argument is the index value, second arg is the number of elements you want.
    return 0;
}
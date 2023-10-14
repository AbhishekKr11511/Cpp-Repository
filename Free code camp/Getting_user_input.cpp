#include<iostream>
using namespace std;

int main()
{
    // // Just enter input a int value from the user
    // int age;
    // cout<<"Enter your age = ";
    // cin>>age;
    // cout<<"You are "<<age<<" years old"<<endl;

    // Enter a string value from the user
    string name;
    cout<<"Enter your name = ";
    getline(cin, name);          // getline() allows us to input a line of string,
    // we pass the cin function to take the input and name for storing the string in the variable.
    cout<<"Hello "<<name<<endl;

    return 0;
}
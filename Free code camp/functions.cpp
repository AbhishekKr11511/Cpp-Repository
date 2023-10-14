#include<iostream>
using namespace std;

void hello(string name, int age)
{
    cout<<"Hello "<<name<<endl;
    if (age>=18)
    {
        cout<<"You are eligible to vote."<<endl;
    }
    else
    {
        cout<<"Grow up shawty."<<endl;
    }
}

int main()
{
    string user;
    int age;
    cout<<"Enter your name : ";
    getline(cin,user);          // used for multiple strings
    cout<<"Enter your age : ";
    cin>>age;
    hello(user,age);
    cout<<"How are you doing today."<<endl;
    return 0;
}


#include<iostream>
using namespace std;

int main()
{
    bool isMale = false;
    bool isTall = true;
    if (isMale && isTall)
    {
        cout<<"You are a male and tall. ";
    }
    else if (isMale && !isTall)
    {
        cout<<"You are a short male.";
    }
    else if (!isMale && isTall)
    {
        cout<<"You are tall but not male";
    }
    else
    {
        cout<<"You are not male.";
    }
    return 0;
}
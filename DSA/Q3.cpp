// Array but also how we access them with pointers

#include<iostream>
using namespace std;

int main()
{
    int marks[4] = {97,96,98,93};
    for (int i = 0; i < 4; i++)
    {
        cout<<marks[i]<<endl;
    }
    cout<<"This is how we access by pointers."<<endl;
    int *p = marks;
    cout<<*(p)<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<"Address of the elements which are 4 bytes apart cause they are int type"<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<&marks[i]<<endl;
    }
    
    return 0;
}
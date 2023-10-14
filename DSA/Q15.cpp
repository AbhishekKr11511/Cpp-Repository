// Array of Objects & Passing Objects as Functions

#include<iostream>
using namespace std;

class Student
{
    int id;
    string name;
    public:
        void setId()
        {
            cout<<"Enter id of student : ";
            cin>>id;
        }
        void setName()
        {
            cout<<"Enter name of student : ";
            cin>>name;
        }
        
        void getId()
        {
            cout<<"Id of student is :"<<id<<endl<<"Name of student is : "<<name<<endl;
        }
};

int main()
{
    Student class11[3];
// Assign objects in the array
    for (int i = 0; i < 3; i++)
    {
        class11[i].setId();
        class11[i].setName();
    }
// Display objects in the array
    for (int i = 0; i < 3; i++)
    {
        class11[i].getId();
    }
    
    return 0;
}
// When a variable is declared as static, 
// space for it gets allocated for the lifetime of the program. 
// Even if the function is called multiple times, space for the static variable 
// is allocated only once and the value of variable in the previous call gets carried through the next function call

#include<iostream>
using namespace std;

class Employee
{
    // These are private variables, hence can't be accessed by main()
    int id;
    static int count;   // Static variables declared (connected to class as a whole and all objects share them.)
    public:
        void setData()
        {
            cout<<"Enter id = ";
            cin>>id;
            count++;
        }
        void getData()
        {
            cout<<"Employee id = "<<id<<" and this is employee no. : "<<count<<endl;
        }

        // This is a static method, works same way as static variables;
        static void getCount();
        
};

int Employee :: count;  // Default value of static variables is always 0

void Employee :: getCount()
{
            cout<<"No. of employees is : "<<count<<endl;
}


int main()
{
    Employee abhi, satyam, varun;
    //abhi.id = 123; won't work as id is private variable
    abhi.setData();
    abhi.getData();

    satyam.setData();
    satyam.getData();

    varun.setData();
    varun.getData();

// This is how we can call static function of the class which are called by object
// They are called by class itself.

    Employee :: getCount();

    return 0;
}
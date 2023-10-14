// Structures, Unions and Enums

// Structures are custom data types we can create in c
// These are also used in data structures.

#include<iostream>
using namespace std;

typedef struct employee
{
    /* data type defining*/
    int id;
    char favChar;
    float salary;

}ep;    // Now we can just declare a variable using just this.

/* 
A union is a type of structure that can be used 
where the amount of memory used is a key factor
This is most useful when the type of data being passed through functions is unknown,
using a union which contains all possible data types can remedy this problem.
*/

typedef union money
{
    /* data type defining*/
    float rice; //4 Bytes
    long coins; //8 Bytes
    int paperNotes;  //4 Bytes

    // Here rather than 8+4+4 = 16 bytes, like we saw in struct,
    // only 8 bytes can store all of tge int long and float values
    // Therefore 8 bytes will be the size of money
}money;

int main()
{
    struct employee abhishek;   // creates a variable of employee datatype
    //or we can also use the typedef fucntionality

    ep satyam;                  // creates a variable of employee datatype

    money india;                // creates a variable of money datatype

    india.rice = 100;

    cout << "The first value at "
         << "the allocated memory : " << india.rice << endl;
 
    india.coins = 34;
 
    cout << "The next value stored "
         << "after removing the "
         << "previous value : " << india.coins << endl;
 
    india.paperNotes = 34.34;
 
    cout << "The Final value value "
         << "at the same allocated "
         << "memory space : " << india.paperNotes << endl;

    // We declare the parameters of the variable abhishek and satyam.
    abhishek.id = 1000;
    abhishek.favChar = 'a';
    abhishek.salary = 200000000;

    satyam.id = 1001;
    satyam.favChar = 's';
    satyam.salary = 2000000;


    cout<<"Employee ID = "<<abhishek.id<<endl;
    cout<<"Employee favourite character = "<<abhishek.favChar<<endl;
    cout<<"Employee salary = "<<abhishek.salary<<endl;
    cout<<"Employee ID = "<<satyam.id<<endl;
    cout<<"Employee favourite character = "<<satyam.favChar<<endl;
    cout<<"Employee salary = "<<satyam.salary<<endl;

    return 0;
}
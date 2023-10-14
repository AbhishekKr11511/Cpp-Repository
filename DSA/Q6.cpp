// Call by value and call by reference.
// Calling by reference allows us to change the values at the same address
// It does not require to us to return the values after performing the function sometimes.
// Here we can swap the values in the same address only as the native values.

#include<iostream>
using namespace std;

// pointer reference.
void swap(int*, int*);
// reference vairable.
void swapReference(int &, int &);

int main()
{
    int num1, num2;
    int a,b;
    cout<<"Enter 1st number = ";
    cin>>num1;
    cout<<"Enter 2nd number = ";
    cin>>num2;

// We don't pass the actual value.
// We pass address of the variables in the function.
    swap(&num1, &num2);
    cout<<"First swap :-"<<endl;
    cout<<"1st number = "<<num1<<"\n2nd number = "<<num2<<endl;

// We pass the values here,
// The function however will take the address these variables as the argument.
    swapReference(num1, num2);
    cout<<"Second swap :-"<<endl;
    cout<<"1st number = "<<num1<<"\n2nd number = "<<num2<<endl;
    return 0;
}

// The function takes the pointer variables and dereferences them to get the value
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
  //  cout<<a<<"\t"<<b<<endl;
}

// The function takes the pointer variables and dereferences them to get the value
void swapReference(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
  //  cout<<a<<"\t"<<b<<endl;
}

// The advantage is that, after performing the function
// Since the arguments just pointer variables meant to dereference the addresses,
// They get destroyed automatically after function execution hence more efficiency.
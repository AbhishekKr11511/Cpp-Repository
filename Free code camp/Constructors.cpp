#include<iostream>
using namespace std;

class Book
{
    public:
        string title;
        string author;
        int pages;

    // Below we created a constructor which is a function is a class.
    // Everytime we create an object, this function is gonna get called.
        Book(int year){
            cout<<"Published in the year : "<<year<<endl;
        }

};

int main()
{
    Book book1(1980);   // We can pass parameters when creating the object for the constructor
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    Book book2(1999);
    book2.title = "One piece";
    book2.author = "Oda";
    book2.pages = 1000;


    cout<<book1.author<<endl;
    cout<<book2.author<<endl;
    return 0;
    
}
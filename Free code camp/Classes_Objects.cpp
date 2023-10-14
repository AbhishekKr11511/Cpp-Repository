#include<iostream>
using namespace std;

// We create a class and asign it attributes.
class Book
{
    public:
        string title;
        string author;
        int pages;

};

int main()
{
// Here 'Book' is not a data type and we declare a variable book1 of that data type
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    Book book2;
    book2.title = "One piece";
    book2.author = "Oda";
    book2.pages = 1000;


    cout<<book1.author<<endl;
    cout<<book2.author<<endl;
    return 0;
    
}
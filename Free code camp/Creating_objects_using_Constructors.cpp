#include<iostream>
using namespace std;

class Book
{
    public:
        string title;
        string author;
        int pages;
        int year;
        Book(string Ztitle, string Zauthor,int Zpages,int Zyear)
        {
            title = Ztitle;
            author = Zauthor;
            pages = Zpages;
            year = Zyear;
        }
        Book()  // When we make an object but don't pass any attributes.
        {
            title = "No title";
            author = "No author";
            pages = 0;
            year = 0;
        }

        void published()
        {
            if(year < 2000)
            {
                cout<<"This book is from the 20th century."<<endl;
            }
            else
            {
                cout<<"This book from the 21st century."<<endl;
            }
        }

};

int main()
{
    Book book1("Harry Potter","JK Rowling",500,2001);   // We can pass parameters when creating the object for the constructor
    Book book2("One piece","Oda",1000,1999);
    Book book3;
    cout<<book1.author<<endl;
    book1.published();

    cout<<book2.author<<endl;
    book2.published();

    return 0;
    
}
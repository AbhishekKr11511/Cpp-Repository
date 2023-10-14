#include<iostream>
using namespace std;

int main()
{
    int number = 4, guess ,attempts = 0;
    do
    {
        cout<<"Enter you guess : ";
        cin>>guess;
        if (guess == number)
        {
            cout<<"You guess it...";
            break;
        }
        else
        {
            cout<<"Try again."<<endl;
        }
        attempts++;
    }while(attempts <= 5);
    
    return 0;
}
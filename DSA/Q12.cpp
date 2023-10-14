// Nesting of Member Functions

#include<iostream>
#include<string>
using namespace std;

class Binary
{
    string s;
    public:
        void read();
        void chk_bin();
        void ones();

};

void Binary :: read()
{
    cout<<"Enter a binary number = "<<endl;
    cin>>s;
}

void Binary :: chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout<<"Not Binary"<<endl;
            exit(0);
        }
        
    }cout<<"Binary"<<endl;
    
}

void Binary :: ones()
{
    chk_bin();  // This is a nested function, where we can use to check the condition.
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }cout<<s;
}

int main()
{
    Binary num1;
    num1.read();
    //num1.chk_bin();  we will nest this function in the ones() function to check for binary condition
    num1.ones();
    return 0;
}
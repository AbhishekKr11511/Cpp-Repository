#include<iostream>
using namespace std;

int main()
{
    double sales = 95000;
    const double state_tax = 0.02, county_tax = 0.04;
    cout<<"Sales = $"<<sales<<endl
        <<"state tax = $"<<sales*state_tax<<endl
        <<"county tax = $"<<county_tax*sales<<endl;
        return 0;
}

#include<iostream>
using namespace std;

int main()
{
    int numberGrid[3][4] =  {
        {1,2,3,10},
        {4,5,6,20},
        {7,8,9,30}
    };
    cout<<"Any element"<<numberGrid[1][2]<<endl;
    for(int i = 0; i <3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout<<numberGrid[i][j]<<",";
        }
        cout<<endl;
    }
    return 0;
}
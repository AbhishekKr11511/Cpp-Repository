#include<iostream>
using namespace std;

int main()
{
    int nums[]= {1,2,4,6,8};
    for (int i=0; i<=(sizeof(nums)/sizeof(int)); i++)
    {
        cout<<nums[i]<<endl;
    }
    return 0;
}
// (sizeof(nums)/sizeof(int)) This will give the size of the array.
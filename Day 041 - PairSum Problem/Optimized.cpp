// Time Complexity : 0(n)

#include<iostream>
using namespace std;

bool pairSum(int a[],int n,int k)
{
    //double pointer approach
    int high=n-1;
    int low=0;

    while(low<high)
    {
        if(a[low]+a[high]==k)
        {
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(a[low]+a[high]>k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}

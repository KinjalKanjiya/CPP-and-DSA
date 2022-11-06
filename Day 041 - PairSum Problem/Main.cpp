#include<iostream>
using namespace std;

bool pairSum(int a[],int n,int k)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]+a[i]==k)
            {
                cout<<i<<" "<<j<<endl; // printing indices of the elements.
                return true;
            }
        }
    }
    return false;
}


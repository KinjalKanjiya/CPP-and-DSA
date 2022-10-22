//Problem: Given an array a[] of size n. Output sum of each subarray of the given array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of an Array:";
    cin>>n;
    int arr[n];
    cout<<"Enter Number of an elements in Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Sum of SubArray is :";
    int sum =0;
    for(int i=0;i<n;i++){
        sum = 0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<endl;

        }
    }
}

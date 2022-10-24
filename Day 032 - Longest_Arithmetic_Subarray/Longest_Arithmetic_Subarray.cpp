
//Arithmatic Array is an array that consist at least two integers and the difference between consecutive integers are equal . Ex,[9,7,5,3],[5,5,5],[10,9]

// Program to find longest Arithmetic subarray.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of an Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Number of an Elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = 2;
    int pd = arr[1]-arr[0];
    int j= 2;
    int curr = 2;
    while(j<n){
        if(pd == arr[j]-arr[j-1]){
            curr++;
        }
        else{
            pd = arr[j] - arr[j-1];
            curr=2;
        }
        ans = max(ans,curr);
        j++;

    }
    cout<<ans<<endl;
    return 0;
}

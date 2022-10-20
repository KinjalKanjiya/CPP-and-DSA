
// Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration.
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter Size of an Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Number of an Elements in Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]= current;
    }
    cout<<"Soreted Array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}

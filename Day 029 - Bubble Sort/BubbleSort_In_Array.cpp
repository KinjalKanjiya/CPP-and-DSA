//In Bubble Sort Repetedly swap two adjacent elements if they are in wrong order.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of an Array:";
    cin>>n;
    int arr[n];
    cout<<"Enter Number of Elements in an Array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int counter=1;
    while(counter<n-1){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;

            }
        }
        counter++;
    }
    cout<<"Sorted Array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

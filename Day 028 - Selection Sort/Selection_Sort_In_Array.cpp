/* Selection Sort */
/*
" Find the minimum element in unsorted array and swap
  it with element at begining. "
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements of an Array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // selection Sort Logic
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp;
                temp = arr[j];
                arr[j]= arr[i];
                arr[i]= temp;
            }
        }

    }

    cout<<"Sorted Array is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    return 0;

}

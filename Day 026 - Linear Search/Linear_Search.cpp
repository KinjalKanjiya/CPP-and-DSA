// Program to search element in an array in one by one.


#include<iostream>
using namespace std;
//Time Complaxity is O(n)
//To Search Element in array
int LinearSearch(int arr[], int n, int key){
    for(int i =0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    //Size of array
    int n;
    cout<<"Enter Size of Array: "<<endl;
    cin>>n;
    cout<<"Enter Element of an Array"<<endl;
    int arr[n];
    //To Array UserInput
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter Search Element in Array:"<<endl;
    int key;
    cin>>key;
    cout<<LinearSearch(arr,n,key);
    return 0;
}




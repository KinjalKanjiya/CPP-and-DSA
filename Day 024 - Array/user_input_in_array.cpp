// Program to Take a value from the user in array and print it.
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
        //cout<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;

}

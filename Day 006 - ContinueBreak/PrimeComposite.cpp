//check prime or composite
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"Composite";
            break;
        }
    }
    if(i==n){
        cout<<"prime number";
    }
    return 0;
}

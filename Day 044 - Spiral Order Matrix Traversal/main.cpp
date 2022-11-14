#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter Number of Rows: ";
    cin>>n;
    cout<<"Enter Number of Columns: ";
    cin>>m;
    int a[n][m];
    cout<<"Enter the Element of an Array: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }


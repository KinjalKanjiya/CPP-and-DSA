#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of Rows:";
    cin>>n;
    cout<<"Enter number of Columns:";
    cin>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }


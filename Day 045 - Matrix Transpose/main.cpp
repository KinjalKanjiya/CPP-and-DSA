#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter Number of Rows and Columns:";
    cin>>n>>m;
    int a[n][m];
    cout<<"Enter the elemnets of matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    //Transpose matrix
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            //swap
            int temp = a[i][j];
            a[i][j]= a[j][i];
            a[j][i]=temp;
        }
    }
  

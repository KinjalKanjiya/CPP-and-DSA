#include<iostream>
using namespace std;
int main(){
    //Note:When we apply multiplication of matrix then first matrix column and second matrix row will be same size.
    int n1,n2,n3;
    cout<<"Enter number of Row of Matrix1:"<<endl;
    cin>>n1;
    cout<<"Enter Number of Column of Matrix 1 & Row of matrix 2"<<endl;
    cin>>n2;
    cout<<"Enter Number of Column of Matrix 2"<<endl;
    cin>>n3;
    cout<<"Matrix1:"<<endl;
    //For Matrix 1
    int m1[n1][n2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>m1[i][j];
        }
    }
    cout<<"Matrix2:"<<endl;

    //For Matrix 2
    int m2[n2][n3];
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cin>>m2[i][j];
        }
    }


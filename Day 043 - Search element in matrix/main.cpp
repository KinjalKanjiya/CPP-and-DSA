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

    cout<<"Matrix is :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;

    }
    int x;
    cout<<"Element is :";
    cin>>x;
    bool flag=false;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==x){
                cout<<"Element is in Row "<<i<<" Column "<<j<<endl;
                flag=true;
            }
        }
    }
    if(flag){
        cout<<"Element is found\n";
    }
    else{
        cout<<"Element is not found\n";
    }

}

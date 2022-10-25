#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size od an Array: ";
    cin>>n;
    int arr[n+1];
    arr[n]=-1;
    cout<<"Enter a Elements of an Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }

    int ans = 0;
    int mx = -1;
    for(int i=0;i<n;i++){
    if(arr[i]>mx && arr[i]>arr[i+1]){
        ans++;
    }
        mx = max(mx, arr[i]);
    }

    cout<<"Record Breaking Day is:"<<ans<<endl;

}

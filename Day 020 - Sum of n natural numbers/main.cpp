// Program to find sum of first n natural numbers.

#include<iostream>
using namespace std;
int sum(int n){
    int ans=0;
    for(int i=0;i<=n;i++){
        ans = ans+i;

    }
    return ans;

}
int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;

}

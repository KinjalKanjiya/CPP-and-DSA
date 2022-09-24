//Lets do with Fun Example 
//Neha is go out of even day and if pocketmoney is not then it will not go.

//Break and continue statement is used to control the flow of loops on some metting some specification condition.
//continue statement is use to skip to the next iteration of the loop
//break statement is use to terminate the loop

#include<iostream>
using namespace std;
int main()
{
    int pocketMoney=3000;
    for(int date;date<=30;date++){
        if(date%2==0){
            continue;
        }
        if(pocketMoney==0){
            break;
        }

        cout<<"Go out Today";
        pocketMoney=pocketMoney-300;


    }
}

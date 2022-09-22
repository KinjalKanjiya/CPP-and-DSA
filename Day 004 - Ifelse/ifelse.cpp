//Lets do with Fun Example 
//Rajan have two girlfriend neha and rasmi .Neha is expensive girlfriend and rasmi is understanding girlfriend so rajan is confused  he has to go with her girlfrd but which girlfrd so he decide according to their saving if rajan saving is above 5000 then he will go with neha and oterwise he will go with rashmi.we can elseif codition add like if saving is above 5000 then Neha and if else saving is above 2000 and less than 5000 than Rashmi and otherwise he will go with friends.we can wtrite if inside if-else condition then if saving is above 5000 then check if saving is above 10000 then go with shopping with rashmi otherwise go with roadtrip with rashmi.we can elseif codition add like if saving is above 5000 then Neha and if else saving is above 2000 and less than 5000 than Rashmi and otherwise he will go with friends.
#include<iostream>
using namespace std;
int main()
{
    int saving;
    cin>>saving;
    if(saving>5000){
        if(saving>10000){
        cout<<"shopping with Neha\n";
    }
        else{
       cout<<"roadtrip with neha\n";
        }
    }
    else if(saving>2000)
    {
        cout<<"Rashmi\n";
    }
    else
    {
        cout<<"Frds\n";
    }
    return 0;
}

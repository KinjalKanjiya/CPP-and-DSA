//Class is a user-defined data type which defines its properties and its functions. Class is the only logical representation of the data.
#include<iostream>
using namespace std;
class Student{
public:
int id; //data member
string name;//data memeber
};
int main(){
Student s1;//creating an object of Student
s1.id=21;
s1.name="Kinjal";
cout<<s1.id<<endl;
cout<<s1.name<<endl;
return 0;
}
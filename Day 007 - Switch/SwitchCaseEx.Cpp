//Program using switch Case.
#include<iostream>
using namespace std;
int main()
{
    char Button;
    cout<<"Input a character: ";
    cin>>Button;
    switch(Button){
    case 'a':
        cout<<"Hello";
        break;
    case 'b':
        cout<<"Namaste";
        break;
    case 'c':
        cout<<"Sault";
        break;
    case 'd':
        cout<<"Hola";
        break;
    case 'e':
        cout<<"Cioa";
        break;
    default:
        cout<<"I am still learning more";
        break;
    }
    return 0;

}

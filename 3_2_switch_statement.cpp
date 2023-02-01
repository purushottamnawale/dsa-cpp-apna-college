#include<iostream>
using namespace std;

int main(){
    char button;
    cout<<"Input a charater : ";
    cin>>button;


    switch(button)
    {
        case 'a':
            cout<<"Hello"<<endl;
            break;
        case 'b':
            cout<<"Namaste"<<endl;
            break;
        case 'c':
            cout<<"Hola"<<endl;
            break;
        case 'd':
            cout<<"Bonjour"<<endl;
            break;
        case 'e':
            cout<<"Ciao"<<endl;
            break;
        default:
            cout<<"I am still learning more"<<endl;
            break;

    }

    return 0;
}



/* int main(){
    char button;
    cout<<"Input a character : ";
    cin>>button;

    if(button=='a')
        {cout<<"Hello"<<endl;}

    if(button=='b')
        {cout<<"Namaste"<<endl;}

    if(button=='c')
        {cout<<"Hola"<<endl;}

    if(button=='d')
        {cout<<"Bonjour"<<endl;}

    if(button=='e')
        {cout<<"Ciao"<<endl;}

    return 0;
} */
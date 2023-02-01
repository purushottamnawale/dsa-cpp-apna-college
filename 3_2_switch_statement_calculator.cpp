#include<iostream>
using namespace std;

int main(){
    float a,b;
    cout<<"Input 2 numbers : ";
    cin>>a>>b;

    char op;
    cout<<"Input an operator : ";
    cin>>op;

    switch(op)
    {
        case '+':
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        case '/':
            cout<<"a/b"<<endl;
            break;
        default:
            cout<<"Enter other operator"<<endl;
            break;

    }

    return 0;
}
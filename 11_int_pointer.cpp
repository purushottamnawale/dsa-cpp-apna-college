#include<iostream>
using namespace std;

int main()
{
    //A pointer is a variable that stores the memory address of an object.
    int a=10;
    int *aptr=&a;

    cout<<a<<endl;
    cout<<&a<<endl; //prints address
    cout<<*&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;


    *aptr=20;
    cout<<*aptr<<endl;

    aptr++;
    cout<<aptr<<endl; //4 bytes increase


    return 0;
}
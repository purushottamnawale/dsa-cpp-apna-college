#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void increment(int *c)
{
    (*c)++;
}


int main()
{
    int a=2;
    int b=4;

    int *aptr=&a;
    int *bptr=&b;
    swap(aptr,bptr); // sending addresses to the function
    //swap(&a,&b); // this syntax can also be used to directly send the addresses
    cout<<a<<" "<<b<<endl;

    int c=5;
    increment(&c);
    cout<<c<<endl;

    return 0;
}
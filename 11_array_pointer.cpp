#include<iostream>
using namespace std;

int main()
{
    int arr[]={10,20,30,40};
    cout<<*arr<<endl;

    int *num=arr;
    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<num<<endl;
    cout<<*num<<endl;



    for(int i=0;i<4;i++)
    {
        cout<<*num<<" ";
        num++; // 4 bytes increase
    }
    cout<<endl;

    for(int i=0;i<4;i++)
    {
        cout<<*(arr+i)<<" ";
        // arr++;  invalid syntax
    }

    return 0;
}
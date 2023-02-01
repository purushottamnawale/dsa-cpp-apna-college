#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    int i=0;
    while(arr[i]!='\0')
    {
        cout<<arr[i]<<" ";
        i++;
    }
    
    cout<<endl<<arr;
    cout<<arr[2];


    return 0;
}
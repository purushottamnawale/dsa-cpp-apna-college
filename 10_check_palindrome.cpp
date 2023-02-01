#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check=1;

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            check=0;
            break;
        }
    }
    if(check==true)
    {
        cout<<"Word is a palindrome";
    }
    else
    {
        cout<<"Word is not a palindrome";
    }

    return 0;
}
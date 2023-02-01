#include<iostream>
#include<climits>
using namespace std;

//This program works only with sorted array.

bool pairsum(int a[],int n,int k)
{
    int low=0;
    int high=n-1;

    while(low<high)
    {
        if(a[low]+a[high]==k)
        {
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(a[low]+a[high]>k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}


int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int k;
    cin>>k;

    cout<<pairsum(a,n,k);

    return 0;
}
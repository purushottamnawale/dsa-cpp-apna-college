#include<iostream>
#include<climits>
using namespace std;

int kadane(int a[],int n)
{
    int currentSum=0;
    int maxSum=INT_MIN;

    for(int i=0;i<n;i++)
    {
        currentSum+=a[i];
        if(currentSum<0){
            currentSum=0;
        }
        maxSum=max(maxSum,currentSum);
    }
    return maxSum;
}


int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int nonwrapsum;
    nonwrapsum=kadane(a,n);

    int wrapsum;
    int totalsum=0;
    for(int i=0;i<n;i++)
    {
        totalsum+=a[i];
        a[i]=-a[i];
    }
    wrapsum=totalsum+kadane(a,n);


    cout<<max(wrapsum,nonwrapsum);
    return 0;
}
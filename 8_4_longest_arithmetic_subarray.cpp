#include<iostream>
using namespace std;

/*
Subarray is a continuous part of the array.
Number of subarrays of an array with n elements = nC2 + n = n*(n+1)/2
Example 124
Subarrays are: 1, 12, 124, 2, 24, 4
Number of subarrays = 6 = 3C2 + 3 = 3*(3+1)/2   

Subsequence is a sequence that can be derived from an array by selecting zero or more 
elements, without changing the order of the remaining elements.
Number of subsequences of an array with n elements = 2​n​

*/

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int ans=2;
    int pd=a[1]-a[0];
    int j=2;
    int curr=2;

    while(j<n){
        if(pd==a[j]-a[j-1]){
            curr++;
        }
        else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans;

    return 0;
}
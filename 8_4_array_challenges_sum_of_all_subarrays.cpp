#include<iostream>
using namespace std;

/*
Subarray vs Subsequence

1. Subarray is a continuous part of the array.
Number of subarrays of an array with n elements = nC2 + n = n*(n+1)/2
e.g. 123
Subarrays are: 1, 12, 123, 2, 23, 3
Number of subarrays = 6 = 3C2 + 3 = 3*(3+1)/2   

2. Subsequence is a sequence that can be derived from an array by selecting zero or more 
elements, without changing the order of the remaining elements.
Number of subsequences of an array with n elements = 2^​n​
e.g. 123
Subsequences are: {}, 1, 2, 3, 12, 13, 23, 123
Number of subsequences = 8 = 2^3

Every subarray is a subsequence but every subsequence is not a subarray.
*/

int main(){
    int n;
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int curr=0;
    for(int i=0;i<n;i++){
        curr=0;
        for(int j=i;j<n;j++){
            curr+=array[j];
            cout<<curr<<endl;
        }
    }

    return 0;
}
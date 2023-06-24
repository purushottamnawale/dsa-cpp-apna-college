#include "bits/stdc++.h"
using namespace std;

/*
Problem Statement;
Given an array A of 0s and 1s, we may change up to K values from to 0 to 1.
Return the length of the longest (contiguous) subarray that contains only 1s.

Idea:
Find the longest subarray with at most K zeros.

For each A[j], try to find the longest subarry.
If A[i] ~ A[j] has zeros <= K, we continue to increment j.
If A[i] ~ A[j] has zeros > K, we increment i (as well as j).
*/

int32_t main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> a(n);
    for(auto &i:a){
        cin>>i;
    }
    int zerocnt=0,i=0,ans=0;
    for(int j=0;j<n;j++){
        if(a[j]==0){
            zerocnt++;
        }
        while(zerocnt>k){
            if(a[i]==0){
                zerocnt--;
            }
            i++;
        }

        // Zerocnt<=K
        ans=max(ans,j-i+1);
    }
    cout<<ans<<endl;


}
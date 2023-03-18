#include<bits/stdc++.h>
#include<deque>
using namespace std;

/*
Slding Window Maximum
[1,3,-1,-3,5,3,6,7]
K=3

[1,3,-1] => 3
[3,-1,-3] => 3
[-1,-3,5] => 5
[-3,5,3] => 5
[5,3,6] => 6
[3,6,7] => 7


Time Complexity is O(n).
Input = 8 3 1 3 -1 -3 5 3 6 7

*/




int main()
{
    int n,k;
    cin>>n,k;
    vector<int> a(n);
    for(auto &i:a){
        cin>>i;
    }


    deque<int> q;
    vector<int> ans;
    for(int i=0;i<k;i++){
        while(!q.empty() and a[q.back()] < a[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(nums[q.front()]);
    for(int i=k;i<n;i++){
        if(q.front()==i-k){
            q.pop_front();
        }
        while(!q.empty() and a[q.back()] < a[i]){
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(a[q.front()]);
    }

    for(auto i:ans){
        cout<<i<<" ";
    }




    return 0;
}
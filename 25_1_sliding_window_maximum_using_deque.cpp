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
    cin>>n>>k;
    vector<int> a(n);
    for(auto &i:a){
        cin>>i;
    }

    deque<int> q; // Indices will be stored here, not elements
    vector<int> ans;
    for(int i=0;i<k;i++){ // For first k elements
        while(!q.empty() and a[q.back()] < a[i]){ // If the current element is greater than the last element in dequeue, then remove the last element's index from dequeue and push the current elements's index into the dequeue.
            q.pop_back(); // This while loop ensures that the elements stored in dequeue are in Descending order
        }
        q.push_back(i); // Add the index of newly discovered maximum element
    }
    ans.push_back(a[q.front()]); // Push the maximum element into the ans vector.

    for(int i=k;i<n;i++){
        if(q.front()==i-k){ // Elements at index i-k will be removed, since they are not part of current sliding window.
            q.pop_front(); 
        }
        while(!q.empty() and a[q.back()] < a[i]){ // similar to previous steps
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
#include "bits/stdc++.h"
using namespace std;



int32_t main()
{
    vector<int> a = {4, 2, 1, 5, 6, 3, 2, 4, 2};

    int ans=0,n=a.size();
    for(int i=0;i<n;i++){
        int minh=INT_MAX; // Instead of positive infinity
        for(int j=i;j<n;j++){
            minh=min(a[j],minh); // Find the height of the minimum bar in corresponding iteration
            int len=j-i+1; // Width of rectangle
            ans=max(ans,len*minh);
        }
    }

    cout <<ans;

    return 0;
}

#include "bits/stdc++.h"
using namespace std;

int rain_water(vector<int> a)
{
    stack<int> st; // store indices
    int n = a.size(), ans = 0;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() and a[st.top()] < a[i])  // If the top element of stack is lesser than current element, then their is potential container for water.
        {
            int cur = st.top();
            st.pop();
            if (st.empty()) // If the stack is empty, then there is no element to support the water container on left side (Containter is not enclosed by both sides).
            {
                break;
            }
            int diff = i - st.top() - 1; // Length of Container
            // Height of Container = min(a[st.top()], a[i]) - a[cur]
            ans += (min(a[st.top()], a[i]) - a[cur]) * diff; // a[st.top()]=left elements    a[cur]=current element    a[i]=right element    i.e. a[st.top()] and a[i] are left and right walls of the container
        }
        st.push(i);
    }
    return ans;
}

int32_t main()
{
    vector<int> a = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << rain_water(a);

    return 0;
}

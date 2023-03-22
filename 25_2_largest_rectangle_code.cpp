#include "bits/stdc++.h"
using namespace std;

int get_max_area(vector<int> a)
{
    stack<int> st; // Create an empty stack. The stack holds indexes of histogram array in an increasing order. The bars stored in stack are always in increasing order of their heights.

    int n = a.size();
    int ans = 0;    // Initialize max area
    a.push_back(0); // To handle cases where there are any elements remaining in the stack

    int i = 0;
    while (i <= n) // Run through all bars of given histogram
    {

        while (!st.empty() and a[st.top()] > a[i]) // If this bar is lower than top of stack, then calculate area of rectangle with stack top as the smallest (or minimum height) bar. 'i' is 'right index' for the top and element before top in stack is 'left index'.
        {
            int t = st.top();
            int h = a[t]; // store the top element, which will be height of rectangle
            st.pop();     // pop the top element
            if (st.empty())
            {
                ans = max(ans, h * i);
            }
            else
            {
                int len = i - st.top() - 1; // Width of rectangle
                ans = max(ans, h * len);    // Calculate the area with h stack as smallest bar
            }
        }
        st.push(i);
        i++;
    }

    return ans;
}

int32_t main()
{
    // vector<int> a = {2, 1, 5, 6, 2, 3};
    // vector<int> a = {6, 2, 5, 4, 5, 1, 6};
    // vector<int> a = {4, 2, 1, 5, 6, 3, 2, 4, 2};
    vector<int> a = {1, 2, 3, 4, 5, 6};
    // vector<int> a = {6, 5, 4, 3, 2, 1};

    cout << get_max_area(a);

    return 0;
}

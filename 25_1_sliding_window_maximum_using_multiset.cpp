#include <bits/stdc++.h>
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


Time Complexity is O(nlog(n)).
Input = 8 3 1 3 -1 -3 5 3 6 7
Multisets in C++ are containers that can store duplicate elements in a sorted manner(Ascending by default). The elements inside the multiset cannot be changed, once they are added to the multiset, they can only be inserted or deleted. A multiset is present in #include<set> header file.
*/

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }

    multiset<int, greater<int>> s; // The use of keyword 'greater' specifies that the elements are stored in Descending Order.
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        s.insert(a[i]); // First three elements are stored in multiset in Descending order i.e. 3 1 -1
    }
    ans.push_back(*s.begin()); // The first element in the multiset which is 3, pushed into the ans vector, because it is largest in the first three.
    for (int i = k; i < n; i++)
    {
        s.erase(s.lower_bound(a[i - k])); // This removes the elements which are no longer needed, here, 1 is removed from the multiset from 1st interation.
        s.insert(a[i]);                   // Next element of array is added into the multiset i.e. 4
        ans.push_back(*s.begin());        // Again The first element of multiset i.e. 4 (which is largest) is pushed into ans vector.
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}

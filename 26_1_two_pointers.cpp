#include "bits/stdc++.h"
using namespace std;

/*
3 Sum Problem with Two Pointers in O(N^2)
Solution:
1.  Sort the array
2.  Traverse the array and fix the first element of the triplet. The problem reduces to 
    find if there exist two elements having sum equal to x-array[i].

for input:
6 24
12 3 6 9 34 25

1. Sort the array: O(N.logN)
3 6 9 12 25 34

2. Iterating each element and applying two sum problem to the rest of array: O(N^2)
for i=0, lo=1, hi=5
current = 3+6+34 = 43 > 24

for i=0, lo=1, hi=4
current = 3+6+25 = 34 > 24

for i=0, lo=1, hi=3
current = 3+6+12 = 21 < 24

for i=0, lo=2, hi=3
current = 3+9+12 = 24 == 24

*/

int32_t main()
{
    int n;
    cin >> n;

    int target;
    cin >> target;

    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    bool found = false;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        int lo = i + 1, hi = n - 1;
        while (lo < hi)
        {
            int current = a[i] + a[lo] + a[hi];
            if (current == target)
            {
                found = true;
                break;
            }
            if (current < target)
            {
                lo++;
            }
            else
            {
                hi--;
            }
        }
    }

    if (found)
    {
        cout << "True"<<"\n";
    }
    else
    {
        cout << "False"<<"\n";
    }
}
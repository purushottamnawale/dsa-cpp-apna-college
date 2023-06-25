#include <bits/stdc++.h>
using namespace std;

/*
For Input:
7
1 5 3 4 3 5 6


i =  0  1  2  3  4  5  6
     1  5  3  4  3  5  6


idx array
i =  0  1  2  3  4  5  6
    -1 -1 -1 -1 -1 -1 -1

i =  0  1  2  3  4  5  6
    -1  0 -1  2  3  1  6

*/

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    const int N = 1e3 + 2;
    // const int N=1e6+2; // Memory Consumption is high


    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minidx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]] != -1) // If condition is statisfied then it means that the element is encountered before
        {
            minidx = min(minidx, idx[a[i]]); // Update the Minimum Index to the first encountered index of that element
        }
        else
        {
            idx[a[i]] = i;
        }
    }

    if (minidx == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minidx + 1 << endl;
    }

    return 0;
}

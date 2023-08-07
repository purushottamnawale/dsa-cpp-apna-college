#include <bits/stdc++.h>
using namespace std;

/*
Input:
6
0 -9 1 3 -4 5

Output:
2


Exaplanation:
 0 -9  1  3 -4  5

Marking the positive numbers as 1 in the check array.

 0  1  2  3  4  5
 1  1  0  1  0  1

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
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            check[a[i]] = 1;
        }
    }

    int ans = -1;
    for (int i = 1; i < N; i++)
    {
        if (check[i] == 0)
        {
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
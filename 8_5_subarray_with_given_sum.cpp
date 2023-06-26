#include <bits/stdc++.h>
using namespace std;

/*
Input:
5 12
1 2 3 7 5

*/

int main()
{
    int n, s;
    cin >> n >> s;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0, j = 0, st = -1, en = -1, sum = 0; // i and j are pointers, st and en are starting and ending indices of subarray, sum is the sum of subarray

    while (j < n && (sum + a[j]) <= s)
    {
        sum += a[j];
        j++;
    }

    if (sum == s)
    {
        cout << i + 1 << " " << j;
        return 0;
    }

    while (j < n)
    {
        sum += a[j];
        while (sum > s)
        {
            sum -= a[i]; 
            i++; // // Adjust the starting index of subarray if the sum exceeds s
        }
        if (sum == s)
        {
            st = i + 1;
            en = j + 1;
            break;
        }
        j++;
    }
    cout << st << " " << en << endl;

    return 0;
}

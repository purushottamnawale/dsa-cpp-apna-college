#include <bits/stdc++.h>
using namespace std;

/*
Input:
5 12
1 2 3 7 5

Output:
2 4

Since, all the elements in subarray are positive. So, If a subarray has sum greater than the given sum 
then there is no possibility that adding elements to the current subarray will be equal to the given sum. 
So, the Idea is to use a similar approach to a sliding window. 

* Start with an empty subarray 
* Add elements to the subarray until the sum is less than x (given sum). 
* If the sum is greater than x, remove elements from the start of the current subarray.

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

    int i = 0, j = 0, st = -1, en = -1, sum = 0; // i and j are two pointers, st and en are starting and ending indices of subarray

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
            i++; // Adjust the starting index of subarray if the sum exceeds s
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

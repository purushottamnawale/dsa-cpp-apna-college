#include <iostream>
#include <climits>
using namespace std;

/*
Maximum sum subarray - Kadane's Algorithm

Input:
5
-1 4 -6 7 -4


Output:
7

Explaination:
-1  4 -6  7 -4
-1  4 -2  7  3
 0  4  0  7  3
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

    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currentSum += a[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }

    cout << maxSum << endl;

    return 0;
}
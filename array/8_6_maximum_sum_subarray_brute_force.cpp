#include <iostream>
#include <climits>
using namespace std;

/*
Maximum Sum Subarray - Brute Force O(n^3):

Input:
4
-1 4 7 2

Output:
13


*/

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            maxSum = max(maxSum, sum);
        }
    }

    cout << maxSum;

    return 0;
}
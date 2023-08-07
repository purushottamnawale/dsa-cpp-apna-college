#include <iostream>
#include <climits>
using namespace std;

/*
Maximum sum circular subarray - Kadane's Algorithm

Input:
7
4 -4 6 -6 10 -11 12

Output:
22


Explaination:
Max subarray sum = Total sum of array - Sum of non-contributing elements
Sum of non-contributing elements = Sum of inverted array

Here, Max subarray sum = 11 - (-11) = 11 + 11 = 22


*/

int kadane(int a[], int n)
{
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
    return maxSum;
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int nonwrapsum;
    nonwrapsum = kadane(a, n);

    int wrapsum;
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += a[i];
        a[i] = -a[i];
    }
    wrapsum = totalsum + kadane(a, n); // kadane of inverted array removed from the total i.e. totalsum - -kadane(a, n) = totalsum + kadane(a, n)

    cout << max(wrapsum, nonwrapsum);
    return 0;
}
#include <iostream>
#include <climits>
using namespace std;

/*
Input:
5
1 -4 3 2 1

Output:
6

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

    int currsum[n + 1];
    currsum[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        currsum[i] = currsum[i - 1] + a[i - 1];
    }

    for (int i = 1; i < n + 1; i++)
    {
        cout << currsum[i] << " ";
    }
    cout << endl;

    int maxSum = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = currsum[i] - currsum[j];
            maxSum = max(sum, maxSum);
        }
    }

    cout << maxSum<<endl;
    return 0;
}
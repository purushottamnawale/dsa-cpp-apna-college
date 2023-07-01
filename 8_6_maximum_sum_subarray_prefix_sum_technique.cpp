#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int cumsum[n + 1];
    cumsum[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        cumsum[i] = cumsum[i - 1] + a[i - 1];
    }

    for (int i = 1; i < n + 1; i++)
    {
        cout << cumsum[i] << " ";
    }
    cout << endl;

    int maxSum = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = cumsum[i] - cumsum[j];
            maxSum = max(sum, maxSum);
        }
    }

    cout << maxSum;
    return 0;
}
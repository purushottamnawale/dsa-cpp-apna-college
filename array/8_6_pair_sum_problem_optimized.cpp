#include <iostream>
#include <climits>
using namespace std;

/*
Pair Sum Problem - Optimized O(N):

Check if there exists two elements in an array such that their sum is equal to given k.
This program works only with sorted array.

Input:
8
2 4 7 11 14 16 20 21
31

Output:
3 6
1


*/

bool pairsum(int a[], int n, int k)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        if (a[low] + a[high] == k)
        {
            cout << low << " " << high << endl;
            return true;
        }
        else if (a[low] + a[high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
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

    int k;
    cin >> k;

    cout << pairsum(a, n, k) << endl;

    // int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
    // int k = 31;
    // cout << pairsum(arr, 8, k) << endl;

    return 0;
}
#include <iostream>
#include <climits>
using namespace std;

/*
Pair Sum Problem - Brute Force O(N^2)

Check if there exists two elements in an array such that their sum is equal to given k.

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
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == k)
            {
                cout << i << " " << j << endl;
                return true;
            }
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
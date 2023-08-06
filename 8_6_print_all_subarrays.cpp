#include <iostream>
#include <climits>
using namespace std;

/*
Print all subarrays: O(N^3)

Input:
4
-1 4 7 2

Output:
-1
-1 4
-1 4 7
-1 4 7 2
4
4 7
4 7 2
7
7 2
2
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

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
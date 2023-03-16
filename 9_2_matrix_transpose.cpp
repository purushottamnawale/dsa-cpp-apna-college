#include <bits/stdc++.h>
using namespace std;

// This program is only for square matrices.

int main()
{
    int n;
    cin >> n;

    int A[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++) // If j=0 used, then the program will do a transpose again, giving us the same matrix.
        {
            // swap
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }

    // 00 01 02
    //    11 12
    //       22

    cout << "Matrix is : \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
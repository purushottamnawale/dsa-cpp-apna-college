#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{

    int min_index;
    for (int i = 0; i < n - 1; i++)
    {
        // find the smallest number in the remaining part, store its index in min_index and swap it.
        min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        swap(arr[i], arr[min_index]);
    }

    /*
    Selection sort works by selecting. Select the smallest element from the data and swap it
    with the first position. Then, select the smallest element from the remaining array
    (excluding the already considered element) and swap it with the next position.

    12 45 23 51 19 10
    10 45 23 51 19 12
    10 12 23 51 19 45
    10 12 19 51 23 45
    10 12 19 23 51 45
    10 12 19 23 45 51
    */

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selection_sort(arr, n);
}
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
    Selection sort works by selecting. Select the smallest element from your data and store it to first position. Select smallest data from remaining data set(excluding already considered element), store to next position. It's all about selecting elements according to the need. Hence, Selection sort.

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
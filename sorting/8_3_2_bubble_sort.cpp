#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }


    // The bubble(element) with the highest density(value) goes to the top(last position). Bubble(element) with second highest density(value) goes up to the position before the highest bubble(element). Imagine bubbles coming upwards in water.

    /*
    5 4 3 2 1
    4 3 2 1 5
    3 2 1 4 5
    2 1 3 4 5
    1 2 3 4 5
    */

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
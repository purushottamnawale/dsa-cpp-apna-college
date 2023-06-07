#include <bits/stdc++.h>
using namespace std;

/*
The span of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the
given day, for which the price of the stock on the current day is less than or equal to its price on the given day.
*/

vector<int> stockSpan(vector<int> prices)
{
    vector<int> ans;
    int n =prices.size();
    for (int i = 0; i < n; i++)
    {
        int days = 0;
        for (int j = i; j >= 0; j--)
        {
            if (prices[i] >= prices[j])
            {
                days++;
            }
            else
            {
                break;
            }
        }
        ans.push_back(days);
    }
    return ans;
}

int32_t main()
{
    vector<int> a = {100, 80, 60, 70, 60, 75, 85};
    vector<int> res = stockSpan(a);
    for (auto i : res)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}
#include "bits/stdc++.h"
using namespace std;

/*
string = "pwwkew"
p = 0 start = -1 maxLen = 1
w = 1 start = -1 maxLen = 2
w = 2 start =  1 maxLen = 2
k = 3 start =  1 maxLen = 2
e = 4 start =  1 maxLen = 3
w = 5 start =  2 maxLen = 3

*/

int32_t main()
{
    string s;
    cin >> s;
    vector<int> dict(256, -1);
    int maxLen = 0, start = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (dict[s[i]] > start) // If condition satisfied when the character is already encountered
        {
            start = dict[s[i]];
        }
        dict[s[i]] = i;
        maxLen = max(maxLen, i - start);
    }
    cout << maxLen << endl;
}
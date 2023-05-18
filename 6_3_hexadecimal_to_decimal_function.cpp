#include <bits/stdc++.h>
using namespace std;

/*
Hexadecimal to Decimal Function
1CF = 1*256 + 12*16 + 15*1 
    = 463

*/



int hexadecimalToDecimal(string n)
{
    int ans = 0;
    int x = 1;
    int s = n.size(); // n.size() gives number of characters in a string

    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans += x * (n[i] - '0'); // (n[i]-'0') gives ASCII decimal value difference
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans += x * (n[i] - 'A' + 10); // (n[i]-'A'+10) gives ASCII decimal value difference
        }
        x *= 16;
    }
    return ans;
}

int main()
{
    string n;
    cin >> n;

    cout << hexadecimalToDecimal(n);

    return 0;
}
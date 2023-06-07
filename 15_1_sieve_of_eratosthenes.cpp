#include <iostream>
using namespace std;

void primeSieve(int n)
{
    int prime[n + 1] = {0}; // Make an array of zeros
    // Mark all the 0s with 1s, if the corresponding number is composite. e.g. for 2, mark all the numbers which are multiples of 2

    for (int i = 2; i * i <= n; i++) // i*i<=n or i<=sqrt(n) is based on the fact that one of the factor of a non-prime number/composite number must be less than or equal to its square root.
    {
        if (prime[i] == 0) // Avoids extra iterations
        {
            for (int j = i * i; j <= n; j += i) // j=i*i, Because the numbers before their squares have already been marked.
            {
                prime[j] = 1;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;

    primeSieve(n);

    return 0;
}
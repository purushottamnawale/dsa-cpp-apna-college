#include <iostream>
using namespace std;

/*
Prime factorization is the process of writing a number as the product of prime numbers.
40 | 2
20 | 2
10 | 2
 5 | 5

So, Prime factorization of 40 is 40=2*2*2*5, where all the factors are prime.
*/

void primefactor(int n)
{
    int spf[n + 1] = {0}; // SPF = Smallest Prime Factor
    
    for (int i = 2; i <= n; i++) // Marking smallest prime factor for every number to be itself
    {
        spf[i] = i;
    }

    for (int i = 2; i*i<= n; i++) // Using Sieve, Replace all Numbers from 2 to N, with their Prime Factors
    {
        if (spf[i] == i) // Checking if i is prime
        {
            for (int j = i * i; j <= n; j += i) // Markin SPF for all numbers divisible by i
            {
                if (spf[j] == j) // Marking spf[j] if it not previously marked
                {
                    spf[j] = i;
                }
            }
        }
    }

    while (n != 1)
    {
        cout << spf[n] << " "; // Printing Prime Factors
        n = n / spf[n]; // Prime factorization by dividing by smallest prime factor at every step
    }
}

int main()
{

    int n;
    cin >> n;

    primefactor(n);
}
#include <iostream>
using namespace std;

/*
This problem is solved using Bit Manipulation.
Set bits in a binary number is represented by 1.

n & n-1 has same bits till rightmost set bit
n=111100
n-1=111011

n=6=0110
n-1=5=0101

n=8=1000
n-1=7=0111

# For power of 2 numbers
0110 & 0101 = 0100        1000 & 0111 = 0000
n has only one set bit, and n-1 will have all set bits after that position.

So, if a number n is a power of 2 then bitwise & of n and n-1 will be zero.
*/

int ispowerof2(int n)
{
    return (n && !(n & n - 1)); // To handle n=0
    // !(n & n-1) is enough for natural numbers i.e. not included 0
}

int main()
{
    cout << ispowerof2(16) << endl;

    return 0;
}
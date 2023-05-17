#include <bits/stdc++.h>
using namespace std;

/*
Decimal to Binary Function
115 = 1110011 = 1*64 + 1*32 + 1*16 + 0*8 + 0*4 + 1*2 + 1*1

x=64
x<n , where x is the largest power of 2 less than n

lastDigit=n/x
n=n-lastDigit*x
x=x/2
ans=ans*10+lastDigit

iteration 1
115/64=1
115-1*64=51
64/2=32
0*10+1=1

iteration 2
51/32=1
51-1*32=19
32/2=16
1*10+1=11

iteration 3
19/16=1
19-1*16=3
16/2=8
11*10+1=111

iteration 4
3/8=0
3-0*8=3
8/2=4
111*10+0=1110

iteration 5
3/4=0
3-0*4=3
4/2=2
1110*10+0=11100

iteration 6
3/2=1
3-1*2=1
2/2=1
11100*10+1=111001

iteration 7
1/1=1
1-1*1=0
1/2=0
111001*10+1=1110011
*/

int decimalToBinary(int n){
    int x=1;
    int ans=0;

    while(x<=n){
        x*=2;
    }
    x/=2;

    while(x>0){
        int lastDigit=n/x;
        n-=lastDigit*x;
        x/=2;
        ans=ans*10+lastDigit;
    }
    return ans;
}



int main(){
    int n;
    cin>>n;

    cout<<decimalToBinary(n);

    return 0;
}
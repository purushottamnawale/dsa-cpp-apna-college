#include<iostream>
using namespace std;

/*
1  0  1  0
= 1*2^3 + 0*2^2 + 1*2^1 + 0*2^0
= 8 + 0 + 2 + 0

*/

int binaryToDecimal(int n){
    int ans=0;
    int x=1;

    while(n>0){
        int y=n%10; // last digit
        ans += x*y; // 
        x *= 2;
        n /= 10;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<binaryToDecimal(n);

    return 0;
}
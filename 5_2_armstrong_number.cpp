#include<iostream>
#include<math.h>
using namespace std;

// An armstrong number is a number that is equal to the sum of cubes of its digits.
// 153 => 1+125+27 => 153

int main(){


    int n;
    cin>>n;

    int sum=0;
    int originaln = n;

    while(n>0){
        int lastdigit=n%10;
        sum += round(pow(lastdigit,3));
        n=n/10;
    }

    if(originaln == sum){
        cout<<"Armstrong Number";
    }else{
        cout<<"not armstrong";
    }

    return 0;
}
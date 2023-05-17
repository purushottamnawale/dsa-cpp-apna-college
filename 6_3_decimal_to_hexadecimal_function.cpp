#include <bits/stdc++.h>
using namespace std;


/*
Decimal to Hexadecimal Function
7680 = 1E00 = 1*4096 + 14*256 + 0*16 + 0*1

x=4096
x<n , where x is the largest power of 16 less than n


lastdigit=n/x
n=n-lastdigit*x
x=x/16
ans=ans*10+lastdigit

iteration 1
7680/4096=1
7680-1*4096=3584
4096/16=256
""+"1"=1

iteration 2
3584/256=14
3584-14*256=0
256/16=16
"1"+"E"=1E

iteration 3
0/16=0
0-0*16=0
16/16=1
"1E"+"0"=1E0

iteration 4
0/1=0
0-0*1=0
1/16=0
"1E0"+"0"=1E00
*/

string decimalToHexadecimal(int n)
{
    int x=1;
    string ans="";

    while(x<=n){
        x*=16;
    }
    x/=16;

    while(x>0)
    {
        int lastDigit=n/x;
        n-=lastDigit*x;
        x/=16;

        if(lastDigit<=9)
            {
            ans=ans+to_string(lastDigit);
            }
        else
            {
            char c='A'+lastDigit-10;
            ans.push_back(c);
            }
        
    }
    return ans;
}


int main(){
    int n;
    cin>>n;

    cout<<decimalToHexadecimal(n);

    return 0;
}
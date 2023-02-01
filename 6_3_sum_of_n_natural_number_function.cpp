#include<iostream>
using namespace std;

int sum(int n){
    int ans=0;
    for(int i=1;i<=n;i++){
        ans+=i;
    }return ans;
}

// Formula s = ( n(n+1) ) / 2

int main(){
    int n;
    cin>>n;

    cout<<sum(n);

    return 0;
}
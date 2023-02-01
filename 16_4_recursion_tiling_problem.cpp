#include<iostream>
using namespace std;


int tilingWays(int n){
    if(n<=2){
        return n;
    }
    return tilingWays(n-1)+tilingWays(n-2);
}

int main(){
    cout<<tilingWays(5)<<endl;
}
#include<iostream>
using namespace std;

int main(){
    int mx=-1999999;
    int n;
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    for(int i=0;i<n;i++){
        mx=max(mx,array[i]);
        cout<<mx<<endl;
    }

    return 0;
}
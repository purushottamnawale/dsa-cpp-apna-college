#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0;
    int counter=1;
    for(counter;counter<=n;counter++){
        sum=sum+counter;
    }
    cout<<sum;


    return 0;
}
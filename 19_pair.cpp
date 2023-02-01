#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    pair <int,char> p;
    p.first=3;
    p.second='d';

    int arr[]={10,16,7,14,5,3,12,9}; 
    vector <pair <int, int>> v;

    cout<<p.first<<" "<<p.second<<endl;
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(arr[0])<<endl;
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;


}
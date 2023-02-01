#include<iostream>
using namespace std;

void countSort(int arr[],int n){
    int k=arr[0];
    for(int i=0;i<n;i++){
        k=max(k,arr[i]);  // 1 3 2 3 4 1 6 4 3
    }

    int count[10]={0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;  // 0 2 1 3 2 0 1
    }

    for(int i=1;i<=k;i++){
        count[i]+=count[i-1];  // 0 2 3 6 8 8 9
    }

    int output[n];
    for(int i=n-1;i>=0;i--){ //0 0 2 3 6 8 8
        output[--count[arr[i]]]=arr[i]; // 1 1 2 3 3 3 4 4 6
    }

    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }
}

int main(){

    int arr[]={1,3,2,3,4,1,6,4,3};
    countSort(arr,9);

    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
}
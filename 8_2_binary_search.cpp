#include<iostream>
using namespace std;

// Binary search algorithm is used in a sorted array.

int binarySearch(int arr[],int n,int key){
    int s=0;
    int e=n; // e=n-1;
    while(s<=e){
        int mid=(s+e)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

/*
find 6
1 2 3 4 5 6
    s=0
    e=5
    mid=2
    s=3
    4 5 6
        s=3
        e=5
        mid=4
        s=5
        6
            s=5
            e=5
            mid=5
            returns index


*/

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<binarySearch(arr,n,key);

    return 0;
}
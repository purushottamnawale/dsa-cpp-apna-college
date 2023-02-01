#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    /*
    12 45 23 51 19 10
        12 23 45 51 19 10
        10 23 45 51 19 12
    10 23 45 51 19 10
        10 23 45 51 19 12
        10 19 45 51 23 12
        10 12 45 51 23 19
    10 12 45 51 23 19
        10 12 45 51 23 19
        10 12 23 51 45 19
        10 12 19 51 45 23
    10 12 19 51 45 23
        10 12 19 51 45 23
        10 12 19 45 51 23
        10 12 19 23 51 45
    10 12 19 23 51 45
        10 12 19 23 51 45
        10 12 19 23 45 51
    */



    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
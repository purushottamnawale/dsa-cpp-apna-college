#include<iostream>
using namespace std;

int main(){

    int PocketMoney=3000;
    for(int date=1;date<=30;date++){
        if(date%2==0){
            continue; //continue skips the current iteration
        } if(PocketMoney==0){
            break; //break stops the entire loop
        }
        cout<<date;
        cout<<" Go out today!"<<endl;
        PocketMoney=PocketMoney-300;
    }

    return 0;
}
#include<iostream>
using namespace std;


bool count(int x,int y, int z){
    int a=max(x,max(y,z));
    int b,c; 

    if(a==x){
        b=y;
        c=z;
    }if(a==y){
        b=x;
        c=z;
    }else{
        b=x;
        c=y;
    }

    if(a*a==b*b+c*c){
        return true;
    }else{
        return false;
    }
}


int main(){

    int x,y,z;
    cin>>x>>y>>z;

    if(count(x,y,z)){
        cout<<"Pythagorean triplet";
    }else{
        cout<<"Not a pythagorean triplet";
    }

    return 0;
}
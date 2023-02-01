#include "bits/stdc++.h"
using namespace std;

class ApnaCollege{
    public:
    void fun(){
        cout<<"I am a function with no arguments"<<endl;
    }

    void fun(int x){
        cout<<"I am a function with int argument"<<endl;
    }

    void fun(double x){
        cout<<"I am a function with double argument"<<endl;
    }
};

int32_t main(){
    ApnaCollege obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.2);

}
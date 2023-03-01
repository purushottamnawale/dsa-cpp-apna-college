#include "bits/stdc++.h"
using namespace std;

/*
Approach 2:
Using Function Call Stack

enQueue(x):
Push x to stack1.

deQueue(x):
1.If stack1 is empty then print error.
2.If stack1 has only one element then return it.
3.Recursively pop everything from the stack1, store the popped item in a variable res, push the res back to stack1 and return res.
*/


class que{
    stack<int> s1;

    public:
    void push(int x){
        s1.push(x);
    }

    int pop(){
        if(s1.empty()){
            cout<<"Queue is empty\n";
            return -1;
        }
        int x=s1.top();
        s1.pop();
        if(s1.empty()){
            return x;
        }
        int item =pop();
        s1.push(x);
        return item;
    }

/*
st=1234
x=4
st=123
item=pop()
    st=123
    x=3
    st=12
    item=pop()
        st=12
        x=2
        st=1
        item=pop()
            st=1
            x=1
            st=NONE
            return 1
        item=1
        st=2
        return 1
    item=1
    st=23
    return 1
item=1
st=234
return 1
*/



    bool empty(){
        if(s1.empty()){
            return true;
        }
        return false;
    }
};

int32_t main()
{
    que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop()<<"\n";
    q.push(5);
    cout<<q.pop()<<"\n";
    cout<<q.pop()<<"\n";
    cout<<q.pop()<<"\n";
    cout<<q.pop()<<"\n";
    cout<<q.pop()<<"\n";
    cout<<q.empty()<<endl;

    return 0;
}



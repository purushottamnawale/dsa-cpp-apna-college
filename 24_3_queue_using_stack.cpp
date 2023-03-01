#include "bits/stdc++.h"
using namespace std;

/*
Approach 1:
Using 2 stacks, here deQueue operation costly

enQueue Operation:
Push x to Stack1.

deQueue Operation:
1.If both stacks are empty then print error.
2.If stack2 is empty, while stack1 is not empty, push everything from stack1 to stack2.
3.Pop the element from stack2 and return it.
*/


class que{
    stack<int> s1;
    stack<int> s2;

    public:
    void push(int x){
        s1.push(x); //cost is O(1)
    }

    int pop(){ //cost is O(n)
        if(s1.empty() and s2.empty()){
            cout<<"Queue is empty\n";
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval=s2.top();
        s2.pop();
        return topval;
    }

    bool empty(){
        if(s1.empty() and s2.empty()){
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



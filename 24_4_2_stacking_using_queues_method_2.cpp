#include<bits/stdc++.h>
using namespace std;

/*
Two Methods
1.Making push method costly
2.Making pop and top method costly

This program uses 2nd one
4321 =>start line
....

.432 after queue push and pop
...1

..43 after queue push and pop
..21

...4 after queue push and pop
.321

.... after queue pop
.321

.321 after swap
....
*/

class Stack{
    int N;
    queue<int> q1;
    queue<int> q2;

    public:
    Stack(){
        N=0;
    }

    void pop(){
        if(q1.empty()){
            return;
        }
        while(q1.size() != 1){
            q2.push(q1.front());
            q1.pop();
        }

        q1.pop();
        N--;

        queue<int> temp=q1;
        q1=q2;
        q2=temp;
    }

    void push(int val){
        q1.push(val);
        N++;
    }

    int top(){
        if(q1.empty()){
            return -1;
        }
        while(q1.size() != 1){
            q2.push(q1.front());
            q1.pop();
        }

        int ans=q1.front();
        q1.pop();
        q2.push(ans);
        

        queue<int> temp=q1;
        q1=q2;
        q2=temp;

        return ans;
    }

    int size(){
        return N;
    }

};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    return 0;
}
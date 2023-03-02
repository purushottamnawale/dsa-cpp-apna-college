#include<bits/stdc++.h>
using namespace std;

/*
Two Methods
1.Making push method costly
2.Making pop method costly

This program uses 1st one

Adding 4 into the stack
.123 =>start line
....

.123 after push into the q2
...4

..12 after push and pop
..34

...1 after push and pop
.234

.... after push and pop
1234

1234 after swap
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
    void push(int val){
        q2.push(val);
        N++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
    }

    void pop(){
        q1.pop();
        N--;
    }

    int top(){
        return q1.front();
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
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();

    cout<<st.size()<<endl;
    return 0;
}
#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st, int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }

    int topele=st.top();
    st.pop();
    insertAtBottom(st,ele);

    st.push(topele);
}

void reverse(stack<int> &st){
    if(st.empty()){
        return;
    }

    int ele=st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,ele);
}

/*
Elements temporarily gets saved in Call Stack instead of creating a new stack.

reverse(1234)
    ele=4
    reverse(123)
        ele=3
        reverse(12)
            ele=2
            reverse(1)
                ele=1
                reverse()
                insertAtBottom(,1)
                    return st=1
            insertAtBottom(1,2)
                topele=1
                insertAtBottom(,2)
                    return st=2
                return st=21
        insertAtBottom(21,3)
            topele=1
            insertAtBottom(2,3)
                topele=2
                insertAtBottom(,3)
                    return st=3
                return st=32
            return st=321
    insertAtBottom(321,4)
        topele=1
        insertAtBottom(32,4)
            topele=2
            insertAtbottom(3,4)
                topele=3
                insertAtBottom(,4)
                    return st=4
                return st=43
            return st=432
        return st=4321
*/


int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    return 0;
}
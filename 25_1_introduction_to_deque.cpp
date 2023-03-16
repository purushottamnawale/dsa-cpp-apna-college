#include<iostream>
#include<deque>
using namespace std;

/*
Deque Double Ended Queue
1. Push and Pop from the end.
2. Insert and Delete from the start.
3. Header File : <deque>
*/




int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_front(4);

    for(auto i:dq){
        cout<<i<<" ";
    }
    cout<<"\n";

    dq.pop_back();
    dq.pop_front();

    for(auto i:dq){
        cout<<i<<" ";
    }
    cout<<"\n";
    cout<<dq.size()<<"\n";

    cout<<dq.front()<<"\n";
    cout<<dq.back()<<"\n";


    return 0;
}
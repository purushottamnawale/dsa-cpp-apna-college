#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s="742687286489143";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;

    
    return 0;
}
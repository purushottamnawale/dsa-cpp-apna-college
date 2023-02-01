#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s1="lieutenant";
    cout<<s1.find("nant")<<endl;

    for(int i=0;i<s1.length();i++)
    {
        cout<<s1[i]<<endl;
    }
    
    s1.erase(6,4);
    cout<<s1<<endl;

    s1.insert(6,"nant");
    cout<<s1<<endl;

    cout<<s1.size()<<endl;
    cout<<s1.length()<<endl;

    string s2=s1.substr(6,4);
    cout<<s2<<endl;

    string s3="123";
    int a=stoi(s3);
    cout<<a+2<<endl;
    cout<<to_string(a)+"4"<<endl;

    string s4="mvslkfjsaryeuthv";
    sort(s4.begin(),s4.end());
    cout<<s4<<endl;


    return 0;
}
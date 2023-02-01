#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1(5,'n');
    cout<<str1<<"\n";

    string str2="ApniKaksha";
    cout<<str2<<endl;

    string s1="fam";
    string s2="ily";
    cout<<s1+s2<<endl;

    //s1=s1+s2; another way
    s1.append(s2);
    cout<<s1<<endl;
    cout<<s1[1]<<endl;

     
    string abc="abcdefghijk lmnopqr stuvwxyz";
    abc.clear();
    cout<<abc<<endl;
    if(abc.empty())
    {
        cout<<"string is empty"<<endl;
    }

    string str3="abc";
    string str4="xyz";
    if(str4.compare(str3)!=0)
    {
        cout<<"strings are not equal"<<endl;
    }
    cout<<str4.compare(str3)<<endl;


    return 0;
}
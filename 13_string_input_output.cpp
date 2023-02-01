#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1;
    cin>>str1;
    cout<<str1<<endl;
    cin.ignore();

    string str2;
    getline(cin,str2);
    cout<<str2;
    return 0;
}
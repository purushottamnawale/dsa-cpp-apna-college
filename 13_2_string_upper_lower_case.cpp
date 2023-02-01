#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
   string str1="abcdefghijk";
   cout<<'a'-'A'<<endl;

   for(int i=0;i<str1.size();i++)
   {
        if(str1[i]>='a' && str1[i]<='z')
        {
            str1[i]-=32;
        }
    }
   cout<<str1<<endl;


   for(int i=0;i<str1.size();i++)
   {
        if(str1[i]>='A' && str1[i]<='Z')
        {
            str1[i]+=32;
        }
    }
    cout<<str1<<endl;

    string str2="uvwxyz";
    transform(str2.begin(),str2.end(),str2.begin(),::toupper);
    cout<<str2<<endl;

    transform(str2.begin(),str2.end(),str2.begin(),::tolower);
    cout<<str2<<endl;




    return 0;
}
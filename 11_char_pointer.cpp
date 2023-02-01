#include<iostream>
using namespace std;

int main()
{
    char c='a';
    char *cptr=&c;
    cout<<c<<endl;
    cout<<&c<<endl; //printing address of a character pointer needs other syntax like below.
    cout << static_cast<void *>(cptr) << endl;
    cout<<*cptr<<endl;

    cptr++;
    cout<<cptr<<endl;
    cout << static_cast<void *>(cptr) << endl;


    return 0;
}
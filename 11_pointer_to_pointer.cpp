#include<iostream>
using namespace std;

int main()
{
    int id=397;
    int *ID;
    ID=&id;
    cout<<ID<<endl;
    cout<<*ID<<endl;

    int **ID1=&ID;
    cout<<*ID1<<endl;
    cout<<**ID1<<endl;

    


    return 0;
}
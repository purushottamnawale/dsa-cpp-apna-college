#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a; //declaration
    a=12; //initialisation
    
    //sizeof() is an operator that evaluates the size of data type, constants, variable in bytes.

    cout << "size of int : " << sizeof(a) << endl;

    float b;
    cout << "size of float : " << sizeof(b) << endl;

    char c;
    cout << "size of char : " << sizeof(c) << endl;

    bool d;
    cout << "size of bool : " << sizeof(d) << endl;

    short int si;
    long int li;

    cout << "size of short int : " << sizeof(si) << endl;
    cout << "size of long int : " << sizeof(li) << endl;
    // size of long int is supposed to be 8 bytes
    // string is not a data type in c++

}
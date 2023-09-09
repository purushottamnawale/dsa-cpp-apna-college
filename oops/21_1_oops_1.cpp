#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }
};

int main(){
    student a;
    a.name="Raj";
    a.age=20;
    a.gender=0;

    a.printInfo();
}
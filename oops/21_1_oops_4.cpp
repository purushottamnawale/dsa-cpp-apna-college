#include<iostream>
using namespace std;

class student{
    // by default private access modifier
    string name;
    
    public:
    int age;
    bool gender;

    // 1. Default Constructor
    student(){
        cout<<"Default Constructor"<<endl;
    }

    // 2. Parameterised Constructor
    student(string s, int a, int g){
        cout<<"Parameterised Constructor"<<endl;
        name=s;
        age=a;
        gender=g;
    }

    // 3. Copy Constructor
    student(student &a){
        cout<<"Copy Constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }

    ~student(){
        cout<<"Destructor called"<<endl;
    }

    void setName(string s){
        name=s;
    }

    void getName(){
        cout<<name<<endl;
    }

    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }
    
    bool operator==(student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    }
};


int main(){
    student a("Raj",20,0);
    //a.printInfo();
    student b("Rahul",21,0);
    student c=a;

    if(b==a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }
}
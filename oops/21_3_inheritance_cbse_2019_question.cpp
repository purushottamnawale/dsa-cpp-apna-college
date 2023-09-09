#include<iostream>
using namespace std;

class Ground{
    int Rooms;
    protected:
        void put();
    public:
        void get();
};

class Middle : private Ground{
    int Labs;
    public:
        void Take();
        void Give();
};
class Top: public Middle{
    int Roof;
    public:
        void In();
        void Out();
};

int main(){
    /*
    Which type of inheritance is this? 
    -> Multilevel

    Write the names of all the members, which are directly accessible by the member function Give() of class Middle.
    ->Data Members: labs
      Member Functions: Put(), Get(), Take(), Give()

    Write the names of all the members, which are directly accessible by the member function Out() of class Top.
    ->Data Members: Roof
      Member Functions: Take(), Give(), In(), Out()
      
    Write the names of all the members, which are directly accessible by the object T of class Top declared in main() function.
    ->Take(), Give(), In(), Out()
    */
}
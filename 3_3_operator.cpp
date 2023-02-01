#include<iostream>
using namespace std;

int main()
{
    int i=1;
      //1   //3
    i=i++ + ++i;
    cout<<i<<endl;

    int j=1,k=2,l;
      //1 //2  //1   //2   //3   //4
    l = j + k + j++ + k++ + ++j + ++k;
    cout<<j<<" "<<k<<" "<<l<<endl;

    int m=0;
       //0    //0   //1  //1
    m = m++ - --m + ++m - m--;
    cout<<m<<endl;

    int a=1,b=2,c=3,n;
        //1   //2   //3
    n = a-- - b-- - c--;
    cout<<a<<" "<<b<<" "<<c<<" "<<n<<endl;

    int x=10,y=20,z;
        //10  //9  //19  //20  //9    //20  //10  //19
    z = x-- - x++ + --y - ++y + --x - y-- + ++x - y++;
    cout<<x<<" "<<y<<" "<<z<<endl;
    
    return 0;

}
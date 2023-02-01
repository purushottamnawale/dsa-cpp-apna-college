#include "bits/stdc++.h"
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Operator Overloading
    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.imag = imag + obj.imag;
        res.real = real + obj.real;
        return res;
    }

    void display()
    {
        cout << real << "+i" << imag << endl;
    }
};

int32_t main()
{
    Complex c1(12, 7);
    Complex c2(6, 7);
    Complex c3;
    c3 = c1 + c2; // c3=c1.add(c2)
    c3.display();
}
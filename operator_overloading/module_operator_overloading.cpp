#include <iostream>
using namespace std;
class Complex
{
public:
    int real;
    int img;

    /*Complex add(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }*/
    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;
    cout << "first complex number" << endl;
    c1.real = 5;
    c1.img = 3;
    cout << "second complex number" << endl;
    c2.real = 10;
    c2.img = 5;
    cout << "sum of two complex number" << endl;
    // c3 = c1.add(c2);
    c3 = c2 + c1;
    cout << c3.real << " + i" << c3.img;
}
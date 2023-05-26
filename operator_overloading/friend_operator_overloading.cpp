#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;

public:
    void get()
    {
        cout << "Enter the real and img part of complex number: ";
        cin >> real >> img;
    }
    void display()
    {
        cout << "complex number: " << real << " + i" << img;
    }
    // friend operator overlaoding prototype
    friend Complex operator+(Complex c1, Complex c2);
};

// friend operator overlaoding fucntion
Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
int main()
{
    Complex c1, c2, c3;
    cout << "first complex number" << endl;
    c1.get();
    c1.display();
    cout << endl;
    c2.get();
    c2.display();
    cout << endl;
    cout << "second complex number" << endl;
    c3 = c1 + c2;
    c3.display();
    return 0;
}
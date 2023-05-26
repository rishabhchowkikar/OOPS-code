#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;

public:
    // Complex(int r = 0, int i = 0)
    // {
    //     real = r;
    //     img = i;
    // }
    void get()
    {
        cout << "Enter the real and imginary part: ";
        cin >> real >> img;
    }
    void display()
    {
        cout << "the complex number: " << real << " + i" << img;
    }
    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
    Complex operator-(Complex x)
    {
        Complex temp;
        temp.real = real - x.real;
        temp.img = img - x.img;
        return temp;
    }
};

int main()
{
    Complex c1;
    Complex c2;
    Complex c3;
    Complex c4;
    cout << "first complex number" << endl;
    c1.get();
    c1.display();
    cout << endl;
    cout << "second complex number" << endl;
    c2.get();
    c2.display();
    cout << endl;
    cout << "sum of two complex number" << endl;
    c3 = c2 + c1;
    c3.display();
    cout << endl;
    cout << "difference between two complex number" << endl;
    c4 = c1 - c2;
    c4.display();
    return 0;
}
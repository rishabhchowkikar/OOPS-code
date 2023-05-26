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
        cout << "enter the real and imginary part: ";
        cin >> real >> img;
    }
    friend ostream &operator<<(ostream &o, Complex &c);
};

ostream &operator<<(ostream &o, Complex &c)
{
    o << c.real << " + i" << c.img;
}
int main()
{
    Complex c1;
    c1.get();
    cout << c1; // invoking of insertion operator
    return 0;
}

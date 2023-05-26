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
    friend ostream &operator<<(ostream &o, Complex &c1);
    friend istream &operator>>(istream &i, Complex &c2);
};
ostream &operator<<(ostream &o, Complex &c1)
{
    o << c1.real << " + i" << c1.img << endl;
    return o;
}
istream &operator>>(istream &i, Complex &c2)
{
    i >> c2.real >> c2.img;
    return i;
}
int main()
{
    Complex c1;
    cout << "Enter the real and imginary part: ";
    cin >> c1;
    cout << c1;
    return 0;
}
#include <iostream>
using namespace std;
class Rational
{
private:
    int p;
    int q;

public:
    void get();
    // void display();
    Rational operator+(Rational &c)
    {
        Rational temp;
        temp.p = (p * c.q) + (q * c.p);
        temp.q = (q * c.q);
        return temp;
    }
    friend ostream &operator<<(ostream &out, Rational &r);
};
ostream &operator<<(ostream &out, Rational &r)
{
    out << "rational number: " << r.p << "/" << r.q << endl;
}
void Rational::get()
{
    cout << "enter value of p and q: ";
    cin >> p >> q;
    if (q == 0)
    {
        q = 1;
        cout << "q can't be zero otherwise it will be undefined" << endl;
    }
}
// void Rational::display()
// {
//     cout << "the rational number: " << p << "/" << q << endl;
// }
int main()
{
    Rational r1, r2, r3;
    cout << "first number" << endl;
    r1.get();
    cout << r1;
    cout << "second number" << endl;
    r2.get();
    cout << r2;
    cout << "sum of both number" << endl;
    r3 = r1 + r2;
    operator<<(cout, r3);
    return 0;
}

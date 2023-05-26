#include <iostream>
using namespace std;

class Derived;

class Base
{
private:
    int a;

protected:
    int b;

public:
    int c;

    friend Derived;
};

class Derived
{
public:
    Base B;

    void fun()
    {
        B.a = 10;
        B.c = 10;
        B.b = 10;
    }

    void display()
    {
        cout << B.a << " " << B.b << " " << B.c << endl;
    }
};

int main()
{
    Derived d;
    d.fun();
    d.display();
    return 0;
}
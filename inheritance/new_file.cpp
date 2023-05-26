#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Base Default constructor" << endl;
    }
    Base(int x)
    {
        cout << "Base Param constructor" << x << endl;
    }
};
class Derived : public Base
{
public:
    Derived()
    {
        cout << "Der Default constructor" << endl;
    }

    Derived(int a)
    {
        cout << "Der param  constructor" << a << endl;
    }
    Derived(int x, int a) : Base(x)
    {
        cout << "Der param constructor" << a << endl;
    }
};

int main()
{
    // Derived d;
    Derived d(10, 20);
}
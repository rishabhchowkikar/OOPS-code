#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "default of Base" << endl;
    }
    Base(int x)
    {
        cout << "Param of Base " << x << endl;
    }
};
class Derived : public Base
{
public:
    Derived()
    {
        cout << "Default of derived" << endl;
    }
    Derived(int y)
    {
        cout << "Param of derived " << y << endl;
    }
    Derived(int x, int y) : Base(x)
    {
        cout << "Param of derived " << y << endl;
    }
};

int main()
{
    Derived d(21, 211585);
    return 0;
}
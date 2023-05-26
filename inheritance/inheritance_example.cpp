#include <iostream>
using namespace std;
class Base
{
public:
    int a;
    void display()
    {
        cout << "Display of Base: " << a << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        Base::a = 23;
        cout << "Show of derived: " << a << endl;
    }
};

int main()
{
    Derived d;
    d.a = 211585;
    d.display();
    d.show();
    // Base b;
    // b.a = 56;

    // b.display();
    return 0;
}
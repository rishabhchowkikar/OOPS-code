#include <iostream>
using namespace std;
class Base
{
public:
    void fun1()
    {
        cout << "fun1 form base class" << endl;
    }

    // virtual funcion
    // virtual void fun2()
    // {
    //     cout << "Fun2 from base class" << endl;
    // }

    // pure virtual function
    virtual void fun2() = 0;
};

class Derived : public Base
{
public:
    void fun2()
    {
        cout << "fun2 of derived class" << endl;
    }
};

int main()
{
    Derived d;
    d.fun1();
    d.fun2();

    cout << endl;

    Base *ptr;
    ptr = &d;
    ptr->fun2();
    return 0;
}
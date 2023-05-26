#include <iostream>
using namespace std;
class Base
{
public:
    void print()
    {
        cout << "Base class pointer is called" << endl;
    }
};

class Derived : public Base
{
public:
    void print() // derived fucntion is overrided
    {
        cout << "Derived class object is called" << endl;
    }
};

int main()
{
    // Base *ptr;
    // Derived obj;
    // ptr = &obj;
    // ptr->print();
    // here base class pointer is called this also know as polymorphism

    Base *ptr;
    Derived obj;
    ptr = &obj;
    ptr->print();
    return 0;
}
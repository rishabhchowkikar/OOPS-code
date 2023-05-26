#include <iostream>
using namespace std;
class Base
{
public:
    virtual void display()
    {
        cout << "display function of base class" << endl;
    }
};

class Derived : public Base
{
public:
    void display()
    // this function is overriding the function display
    // means the base class function is inherit
    // in derived but the function is redefined in derived class
    {
        cout << "display function of derived class" << endl;
    }
};

int main()
{
    Base *ptr;
    Derived obj;
    ptr = &obj;
    ptr->display();
    return 0;
}
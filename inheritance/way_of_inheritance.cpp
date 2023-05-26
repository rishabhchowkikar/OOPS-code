#include <iostream>
using namespace std;
class Parent
{
private:
    int a;

protected:
    int b;

public:
    int c;
    void funParent()
    {
        a = 10;
        b = 5;
        c = 15;
    }
};

// class Child : public Parent
//  if parent class is taken as publicly then all members are accessible except private member
// class Child : protected Parent
// if parent class in inherit protectedly then all members are available and except private memnber all are accessible
class Child : private Parent

{
protected:
public:
    void funchild()
    {
        /// a = 12;
        b = 2;
        c = 15;
    }
};
class GrandChild : public Child
{

public:
    void funGrandChild()
    {
        // a = 15;
        b = 5;
        c = 20;
    }
};
int main()
{
    // Child c;
    //  c.a = 10;
    //  c.b = 20;
    //  c.c = 5;
    return 0;
}
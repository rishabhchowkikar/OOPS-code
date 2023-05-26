#include <iostream>
using namespace std;
class Parent
{
public:
    void display()
    {
        cout << "display of parent class" << endl;
    }
};

class Child : public Parent
{
public:
    void display() // this is an function overriding
    {
        cout << "display of child class" << endl;
    }
};

int main()
{
    Parent p;
    p.display();

    Child c;
    c.display();
    return 0;
}
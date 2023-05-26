#include <iostream>
using namespace std;
class firstBaseClass
{
public:
    void display1()
    {
        cout << "display function of first base class" << endl;
    }
};
class secondBaseClass
{
public:
    void display2()
    {
        cout << "display function of second base class" << endl;
    }
};

class DerivedClass : public firstBaseClass, public secondBaseClass
{
public:
    void display3()
    {
        cout << "display function of derived class" << endl;
    }
};
int main()
{
    DerivedClass d;
    d.display1();
    d.display2();
    d.display3();
    return 0;
}
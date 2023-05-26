#include <iostream>
using namespace std;

class Outer
{
private:
    class Inner
    {
    public:
        void display()
        {
            cout << "display of inner class" << endl;
        }
    };

public:
    void fun()
    {
        i.display(); // here outer class is using the object of inner class
    }

    // inner class object are always create after the defination of class
    Inner i;
    // here inner class object is created
};
int main()
{
    Outer o;
    o.fun();

       return 0;
}
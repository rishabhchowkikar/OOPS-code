#include <iostream>
using namespace std;
class Shape
{
public:
    // NORMAL DISPLAY FUNCTION
    // void display()
    // {
    //     cout << "Shape class display function" << endl;
    // }

    // PURE VIRTUAL DISPLAY FUNCTION
    virtual void display() = 0;
};

class Rectangle : public Shape
{
public:
    void display()
    {
        cout << "Rectangle class display function" << endl;
    }
};

class Circle : public Shape
{
public:
    void display()
    {
        cout << "Circle class display function" << endl;
    }
};

int main()
{
    Shape *ptr;
    Rectangle r;
    ptr = &r;
    ptr->display();
    // ptr pointer point to rectangle class object first
    cout << endl;
    Circle c;
    ptr = &c;
    ptr->display();

    // now ptr is used to point the circle class object in second
}
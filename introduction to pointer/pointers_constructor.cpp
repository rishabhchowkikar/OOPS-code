#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breath;

public:
    Rectangle();
    void get();
    void display();
    int area();
    int perimeter();
    ~Rectangle();
};
Rectangle::Rectangle()
{
    get();
}
void Rectangle::get()
{
    cout << "Enter length and breath : ";
    cin >> length >> breath;
    if (length < 0)
    {
        length = 1;
        cout << "invalid length default assign to 1";
    }
    if (breath < 0)
    {
        breath = 1;
        cout << "invalid breath default assign to 1";
    }
}
int Rectangle::area()
{
    return length * breath;
}
int Rectangle::perimeter()
{
    return 2 * (length + breath);
}
void Rectangle::display()
{
    cout << "Length: " << length << " and breath: " << breath << endl;
    cout << "area: " << area() << endl;
    cout << "perimeter: " << perimeter() << endl;
}
Rectangle::~Rectangle()
{
    cout << "destructor called" << endl;
}
int main()
{
    Rectangle r;
    Rectangle *ptr;
    ptr = &r;
    ptr->display();
    return 0;
}

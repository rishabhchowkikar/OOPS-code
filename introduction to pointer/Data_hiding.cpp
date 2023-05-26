#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breath;

public:
    void get();
    void display();
    int area();
    int perimeter();
};

void Rectangle::get()
{
    cout << "Enter the value of length and breath: ";
    cin >> length >> breath;
    if (length < 0)
    {
        length = 1;
        cout << "length can't be negative" << endl;
    }
    if (breath < 0)
    {
        breath = 1;
        cout << "breath can't be negative" << endl;
    }
}
void Rectangle::display()
{
    cout << "length: " << length << " breath: " << breath << endl;
    cout << "area: " << area() << endl;
    cout << "perimeter: " << perimeter() << endl;
}
int Rectangle::area()
{
    return length * breath;
}
int Rectangle::perimeter()
{
    return 2 * (length + breath);
}

int main()
{
    Rectangle r1;
    r1.get();
    r1.area();
    r1.perimeter();
    r1.display();
    return 0;
}
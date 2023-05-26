#include <iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int breath;

    void get()
    {
        cout << "Enter the length and breath of rectangle: ";
        cin >> length >> breath;
    }
    int area()
    {
        return length * breath;
    }
    int perimeter()
    {
        return 2 * (length + breath);
    }

    void display()
    {
        cout << "entered length and breath: " << length << " and " << breath << endl;
        cout << "area: " << area() << endl;
        cout << "perimeter: " << perimeter() << endl;
    }
};
int main()
{
    Rectangle r1, r2;
    // r1.get();
    // r1.length = 20;
    // r1.display();

    cout << endl;
    r2.get();
    r2.breath = 10;
    r2.display();
    return 0;
}
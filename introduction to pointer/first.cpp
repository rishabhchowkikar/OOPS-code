#include <iostream>
using namespace std;
class Rectangle
{
private:
    float l;
    float b;

public:
    void get()
    {
        cout << "Enter the length and breath of an rectangle: ";
        cin >> l >> b;
    }
    int area()
    {
        return l * b;
    }
    int perimeter()
    {
        return 2 * (l + b);
    }
    void display()
    {
        cout << "the length and breath you entered " << l << " and " << b << endl;
        cout << "the perimeter of reactangle: " << perimeter() << endl;
        cout << "\nThe area of reactangle: " << area() << endl;
    }
};

int main()
{
    Rectangle r1, r2;
    r1.get();
    // r1.l = 20;
    r1.display();

    r2.get();
    r2.display();
    return 0;
}

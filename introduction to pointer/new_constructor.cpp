#include <iostream>

using namespace std;
class Rectangle
{
private:
    int length;
    int breath;

public:
    Rectangle(int l, int b)
    {
        setLength(l);
        setBreath(b);
    }
    void setLength(int l)
    {
        if (l > 0)
        {
            length = l;
        }
        else
        {
            length = 1;
        }
    }
    void setBreath(int b)
    {
        if (b > 0)
        {
            breath = b;
        }
        else
        {
            breath = 1;
        }
    }
    int area()
    {
        return length * breath;
    }
    int perimeter()
    {
        return 2 * (length + breath);
    }
    int display()
    {
        cout << "length: " << length << " breath: " << breath << endl;
        cout << "area: " << area() << endl;
        cout << "perimeter: " << perimeter() << endl;
    }
};
int main()
{
    Rectangle r1(9, 9);
    r1.display();
    return 0;
}

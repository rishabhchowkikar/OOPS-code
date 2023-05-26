#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breath;

public:
    Rectangle()
    {
        get();
    }
    void get()
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
    void display()
    {
        cout << "length: " << length << " breath: " << breath << endl;
        cout << "area: " << area() << endl;
        cout << "perimeter: " << perimeter() << endl;
    }
    int area()
    {
        return length * breath;
    }
    int perimeter()
    {
        return 2 * (length + breath);
    }
};

int main()
{
    Rectangle r;
    r.display();
    return 0;
}
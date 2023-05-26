#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breath;

public:
    Rectangle(int length, int breath)
    {
        this->length = length;
        this->breath = breath;
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
    Rectangle r(10, 5);
    cout << r.area() << " " << r.perimeter() << endl;
}
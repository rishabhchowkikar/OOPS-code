#include <iostream>
#include <cmath>
using namespace std;
class Shape
{
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
};

class Rectangle : public Shape
{
private:
    float length;
    float breath;

public:
    Rectangle(int l = 0, int b = 0)
    {

        // for length
        if (l > 0)
        {
            this->length = l;
        }
        else
        {
            this->length = 1;
        }

        // for breath
        if (b > 0)
        {
            this->breath = b;
        }
        else
        {
            this->breath = 1;
        }
    }

    float area()
    {
        return this->length * this->breath;
    }
    float perimeter()
    {
        return 2 * (this->length + this->breath);
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(int r = 0)
    {
        if (r > 0)
        {
            this->radius = r;
        }
        else
        {
            this->radius = 1;
        }
    }
    float area()
    {
        return M_PI * (this->radius * this->radius);
    }

    float perimeter()
    {
        return 2 * M_PI * this->radius;
    }
};

int main()
{
    Shape *ptr;
    Rectangle r(2, 5);
    ptr = &r;
    cout << ptr->area();
    cout << endl;
    cout << ptr->perimeter() << endl;

    cout << "circle" << endl;
    Circle c(12.5);
    ptr = &c;
    cout << ptr->area();
    cout << endl;
    cout << ptr->perimeter() << endl;
    return 0;
}
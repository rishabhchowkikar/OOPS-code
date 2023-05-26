#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breath;

public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    int getLength() { return length; }
    int getBreath() { return breath; }
    void setLength(int l);
    void setbreath(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};

Rectangle::Rectangle()
{
    length = 1;
    breath = 1;
}
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breath = b;
}

Rectangle::Rectangle(Rectangle &r)
{
    this->length = r.length;
    this->breath = r.breath;
}
int Rectangle::area()
{
    return (length * breath);
}
int Rectangle::perimeter()
{
    return 2 * (length + breath);
}

void Rectangle::setbreath(int b)
{
    breath = b;
}
void Rectangle::setLength(int l)
{
    length = l;
}
bool Rectangle::isSquare()
{
    return length == breath;
}
Rectangle::~Rectangle()
{
    cout << "destructor is called" << endl;
}

// second classs
class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid(int h)
    {
        height = h;
    }
    int getheight()
    {
        return height;
    }
    void setHeigth(int h)
    {
        height = h;
    }
    int volume()
    {
        return (Rectangle::getLength() * Rectangle::getBreath() * height);
    }
};

int main()
{
    Cuboid c(5);
    c.setLength(10);
    c.setbreath(7);
    cout << "the volume: " << c.volume() << endl;
    return 0;
}
#include <iostream>
using namespace std;
class Rectangle
{
public:
    void area()
    {
        cout << "area of rectangle" << endl;
    }
};

class Cuboid : public Rectangle
{
public:
    void volume()
    {
        cout << "volume of cuboid" << endl;
    }
};

int main()
{
    Cuboid c;
    Rectangle *r;
    r = &c;
    r->area();
    // c.volume();
    return 0;
}
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breath;

public:
    void setlength(int l)
    {
        if (l > 0)
            length = l;
        else
            length = 0;
    }

    void setbreath(int b)
    {
        if (b > 0)
            breath = b;
        else
            breath = 0;
    }
    int area()
    {
        return length * breath;
    }
    int perimeter()
    {
        return 2 * (length + breath);
    }
    int getLength();
    int getBreath();
};
int Rectangle::getLength()
{
    return length;
}
int Rectangle::getBreath()
{
    return breath;
}

int main()
{
    Rectangle r;
    // r.length = 10;
    // r.breath = 5;
    r.setlength(10);
    r.setbreath(10);
    cout << r.area() << endl;
    cout << "Length: " << r.getLength() << " Breath: " << r.getBreath() << endl;
    return 0;
}
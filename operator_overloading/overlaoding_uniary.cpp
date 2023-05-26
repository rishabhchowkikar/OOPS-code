#include <iostream>
using namespace std;
class Point
{
private:
    int x;
    int y;

public:
    Point(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }
    Point operator-()
    {
        Point temp;
        temp.x = -x;
        temp.y = -y;
        return temp;
    }
    void display()
    {
        cout << "x: " << x << " y: " << y << endl;
    }
};
int main()
{
    Point p1(2, 3), p2;
    p1.display();
    p2 = -p1;
    p2.display();
    return 0;
}
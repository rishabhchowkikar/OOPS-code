#include <iostream>
using namespace std;
class Area
{
private:
    int x;
    int y;

public:
    void get()
    {
        cout << "Enter the element in x and y: " << endl;
        cin >> x >> y;
    }
    void display()
    {
        cout << "the area of " << x << " and " << y << " is: " << area() << endl;
    }
    int area()
    {
        return x * y;
    }
};
int main()
{
    Area a;
    a.get();
    a.area();
    a.display();
    return 0;
}
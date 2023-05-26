#include <iostream>
using namespace std;
class Greater
{
private:
    int feet;
    float inches;

public:
    Greater(int f = 0, float i = 0.0)
    {
        feet = f;
        inches = i;
    }
    int operator<(Greater m)
    {
        float f1, f2;
        f1 = feet + (inches / 12);
        f2 = m.feet + (m.inches / 12);
        return (f1 < f2);
    }
    void display()
    {
        cout << "feet: " << feet << " inches: " << inches << endl;
    }
};
int main()
{
    Greater g1(7, 4.2), g2(5, 6.5);
    if (g1 < g2)
    {
        g2.display();
        cout << "is greater than ";
        g1.display();
    }
    else
    {
        g2.display();
        cout << "is not greater than ";
        g1.display();
    }
    return 0;
}
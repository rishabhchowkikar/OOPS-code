#include <iostream>
using namespace std;
class Measure
{
private:
    int feet;
    int inches;

public:
    Measure(int f = 0, int i = 0)
    {
        if (f < 0)
        {
            feet = 1;
        }
        else
        {
            feet = f;
        }
        cout << endl;
        if (i < 0)
        {
            inches = 1;
        }
        else
        {
            inches = i;
        }
    }

    Measure operator+(Measure &x)
    {
        Measure temp;
        temp.feet = feet + x.feet;
        temp.inches = inches + x.inches;
        if (temp.inches >= 12)
        {
            temp.feet++;
            temp.inches = temp.inches - 12;
        }
        return temp;
    }

    void display()
    {
        cout << "feet: " << feet << " inches: " << inches << endl;
    }
};
int main()
{
    Measure m1(1, 5);
    Measure m2(2, 8);
    Measure m3;
    m3 = m1 + m2;
    m3.display();
    return 0;
}
#include <iostream>
using namespace std;

class Trapazoid
{
public:
    void number_of_side1()
    {
        cout << "the shape is Trapazoid" << endl;
    }
};

class Triangle
{

public:
    void number_of_side2()
    {
        cout << "the shape is Triangle" << endl;
    }
};

class Hexagon
{

public:
    void number_of_side3()
    {
        cout << "the shape is Hexagon" << endl;
    }
};

class Shape : public Trapazoid, protected Triangle, public Hexagon
{
private:
    int side;

public:
    void get()
    {
        cout << "Enter the side of shape: " << endl;
        cin >> side;
    }
    void number_of_Side()
    {
        if (side == 4)
        {
            number_of_side1();
        }
        else if (side == 3)
        {
            number_of_side2();
        }
        else if (side == 6)
        {
            number_of_side3();
        }
        else
        {
            cout << "no shape has been declared" << endl;
        }
    }
};

int main()
{
    Shape s1;
    s1.get();
    s1.number_of_Side();
    return 0;
}

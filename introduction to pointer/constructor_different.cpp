#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breath;

public:
    // instead of writing two costructor i.e default and parameterized constructor we can do

    /* Rectangle() // 1). default constructor
     {
         length = 1;
         breath = 1;
     }*/

    Rectangle(int len = 0, int bre = 0) // 2). parameterized constructor
    {
        setLength(len);
        setBreath(bre);
    }

    /*void get()
    {
        cout << "Enter the value of length and breath: ";
        cin >> length >> breath;
        if (length < 0)
        {
            length = 1;
            cout << "length can't be negative" << endl;
        }
        if (breath < 0)
        {
            breath = 1;
            cout << "breath can't be negative" << endl;
        }
    }*/

    // 3). copy constructor :- is copying the length and breath of the Rectangle(object) which is passing as argument
    Rectangle(Rectangle &r)
    {
        length = r.length;
        breath = r.breath;
    }
    void setLength(int l)
    {
        if (l > 0)
        {
            length = l;
        }
        else
            length = 1;
    }

    void setBreath(int b)
    {
        if (b > 0)
        {
            breath = b;
        }
        else
            breath = 1;
    }
    void display()
    {
        cout << "length: " << length << " breath: " << breath << endl;
        cout << "area: " << area() << endl;
        cout << "perimeter: " << perimeter() << endl;
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
    // calling parameterised constructor
    Rectangle r1;
    Rectangle r2(r1); // invoking & calling of copy constructor
    r1.display();
    cout << endl;
    r2.display();
    return 0;
}
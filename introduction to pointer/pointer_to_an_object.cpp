#include <iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int breath;

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

    // creating an object and pointer in stack
    /*
       static object

       Rectangle r1;
       Rectangle *ptr;
       ptr = &r1;

       ptr->length = 10;
       ptr->breath = 5;
       cout << ptr->area() << endl;
       cout << ptr->perimeter() << endl;
       */

    // creating an pointer in stack and object in heap

    // dyanmic object

    Rectangle *ptr = new Rectangle();
    ptr->length = 10;
    ptr->breath = 5;
    cout << ptr->area() << endl;
    cout << ptr->perimeter() << endl;

    return 0;
}

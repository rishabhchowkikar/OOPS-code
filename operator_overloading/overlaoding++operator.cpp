#include <iostream>
using namespace std;
class Count
{
private:
    int value;

public:
    Count()
    {
        get();
    }
    void get()
    {
        cout << "enter the value: ";
        cin >> value;
    }
    void display()
    {
        cout << "count: " << value << endl;
    }
    void operator++()
    {
        ++value;
    }
    void operator++(int) // this is for
    {
        value++;
    }
};
int main()
{
    Count c;
    c++; // invoking overlaoding operator
    c.display();
    ++c;
    c.display();
    return 0;
}
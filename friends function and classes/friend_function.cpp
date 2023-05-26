#include <iostream>
using namespace std;
class Test
{
private:
    int a;

protected:
    int b;

public:
    int c;

    void display()
    {
        cout << a << " " << b << " " << c << endl;
    }

    friend void fun();
};

void fun()
{
    Test t;
    t.a = 10;
    t.b = 20;
    t.c = 56;
    t.display();
}

int main()
{
    fun();

    return 0;
}
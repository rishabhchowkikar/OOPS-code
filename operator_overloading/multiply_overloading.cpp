#include <iostream>
using namespace std;
class Mulitply
{
private:
    int a;
    int b;
    int c;

public:
    Mulitply(int a = 0, int b = 0, int c = 0)
    {
        this->a = a;
        this->b = b;
    }
    // Mulitply operator*(Mulitply &x)
    // {
    //     Mulitply temp;
    //     temp.c = a * x.b;
    //     return temp;
    // }
    int operator*()
    {

        c = a * b;
        return c;
    }

    void display()
    {
        cout << "a: " << a << " & b: " << b << endl;
        cout << "multiply: " << c;
    }
};

int main()
{
    Mulitply m1(2, 9);
    m1.display();
    return 0;
}
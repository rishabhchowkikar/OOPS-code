#include <iostream>
using namespace std;
class Innova
{
public:
    static int price;
    static int getPrice();
};
int Innova::price = 200000;
int Innova::getPrice()
{
    price += 50000;
    return price;
}
int main()
{
    Innova x, y, z;
    cout << x.price << endl;
    cout << y.price << endl;
    cout << z.price << endl;
    cout << Innova::price << endl;

    cout << "static member function" << endl;
    cout << x.getPrice() << endl;
    cout << x.getPrice() << endl;
    cout << x.getPrice() << endl;
    cout << Innova::getPrice() << endl;

    return 0;
}
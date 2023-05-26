#include <iostream>
using namespace std;
int swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x, y;
    cout << "Enter two number x and y: ";
    cin >> x >> y;
    cout << x << " " << y << endl;
    swap(x, y);
    cout << x << " " << y << endl;
    return 0;
}
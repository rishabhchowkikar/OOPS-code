#include <iostream>
using namespace std;

int &fun(int &x)
{

    return x;
}

int main()
{
    int a;
    cout << "Enter the value of a: ";
    cin >> a;
    fun(a) = 29;
    cout << a << endl;
    return 0;
}
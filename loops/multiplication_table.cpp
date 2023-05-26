#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << " Enter the number to find the table: ";
    cin >> number;
    int table = 10;

    for (int i = 1; i <= table; i++)
    {
        int multiply = number * i;
        cout << number << " * " << i << " = " << multiply << endl;
    }
    return 0;
}
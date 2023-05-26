#include <iostream>
using namespace std;
int main()
{
    cout << "Menu \n";
    cout << "1. Add\n 2. Subtract \n 3. Multiply\n 4. Divide\n";
    int a, b, c;
    cout << "Enter the values of a, b and c to perform an operation: ";
    cin >> a >> b >> c;
    int option;
    cout << "Enter your option";
    cin >> option;
    switch (option)
    {
    case 1:
        c = a + b;
        cout << "Addtion of both number is:" << c;
        break;

    case 2:
        c = a - b;
        cout << "Subtraction of both number is:" << c;
        break;

    case 3:
        c = a * b;
        cout << "Multiplication of both number is:" << c;
        break;

    case 4:
        c = a / b;
        cout << "Division of both number is:" << c;
        break;
    default:
        cout << "Invalid option entered";
        break;
    }
    return 0;
}
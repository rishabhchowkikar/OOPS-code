#include <iostream>
using namespace std;
int main()
{
    int number;
    int multiply = 1;
    cout << "Enter the number: ";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        multiply = multiply * i;
        cout << multiply << " * ";
    }
    cout << "\nthe factorial of " << number << " is: " << multiply << endl;
    return 0;
}
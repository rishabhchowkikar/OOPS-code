#include <iostream>
using namespace std;
int main()
{
    int number, i;
    int count = 0;
    cout << "Enter the number: ";
    cin >> number;
    for (i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << " \n"
             << number << " is a prime number";
    }
    else
    {
        cout << " \n"
             << number << " is not a prime number";
    }
    return 0;
}
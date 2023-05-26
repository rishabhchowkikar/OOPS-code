#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "Enter the day number you want: ";
    cin >> day;
    if (day == 0)
    {
        cout << "It's Monday";
    }
    else if (day == 1)
    {
        cout << "It's tuesday";
    }
    else if (day == 2)
    {
        cout << "It's WEdnesday";
    }
    else if (day == 3)
    {
        cout << "It's thursday";
    }
    else if (day == 4)
    {
        cout << "It's friday";
    }
    else if (day == 5)
    {
        cout << "It's saturday";
    }
    else if (day == 6)
    {
        cout << "It's sunday";
    }
    else
    {
        cout << "You entered a wrong number";
    }

    return 0;
}
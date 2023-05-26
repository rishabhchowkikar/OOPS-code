#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n: ";
    cin >> n;
    int a[n];
    cout << "Enter the element in an array";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    cout << "the minimum element: " << min;
    return 0;
}
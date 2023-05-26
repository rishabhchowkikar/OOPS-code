#include <iostream>
using namespace std;
int main()
{
    int n;
    int positive = 0, negative = 0;
    cout << "Enter the number of element: ";
    cin >> n;
    int a[n];
    cout << "enter all the element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            negative++;
        }
        else if (a[i] >= 0)
        {
            positive++;
        }
    }
    cout << " Number of negaive element: " << negative << "\n Number of positive element: " << positive;
    return 0;
}
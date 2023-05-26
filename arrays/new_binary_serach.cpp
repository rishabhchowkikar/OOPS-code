#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int a[n], l = 0, h = 4, mid;
    int key;
    cout << "enter the element(sorted element): ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter the key element: ";
    cin >> key;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
        {
            cout << "Element found at index: " << mid;
            return 0;
        }
        else if (key > a[mid])
        {
            l = mid + 1;
        }
        else if (key < a[mid])
        {
            h = mid - 1;
        }
    }
    cout << "elememt not found";
    return 0;
}
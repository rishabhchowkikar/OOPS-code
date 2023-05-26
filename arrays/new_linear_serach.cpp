#include <iostream>
using namespace std;
int main()
{
    int a[5], n = 5;
    int key;
    cout << "Enter the element in an array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the key element: ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            cout << "key element found at: " << i;
            return 0;
        }
    }
    cout << "Element not found";
    return 0;
}
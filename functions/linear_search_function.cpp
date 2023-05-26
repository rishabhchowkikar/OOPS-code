#include <iostream>
using namespace std;

int linear_search(int a[], int size)
{
    int key;
    cout << "Enter the element you want to search";
    cin >> key;
    for (int i = 0; i < size; i++)
    {
        if (key == a[i])
        {
            cout << "element found at index: " << i << endl;
            return 0;
        }
    }
    cout << "\nelement not found";
    return 0;
}

int main()
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;
    int array[size];
    cout << "Enter the element in array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    linear_search(array, size);
    return 0;
}
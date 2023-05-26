#include <iostream>
using namespace std;
int main()
{
    int A[10] = {6, 11, 25, 8, 15, 7, 12, 20, 9, 14};
    int key, n = 10;
    int j = 0;
    cout << "Enter the key element you want to seach: ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == key)
        {
            cout << "the element found at index: " << i;
            j = 1;
            break;
        }
    }
    if (j == 0)
    {
        cout << "Element not found";
    }

    return 0;
}
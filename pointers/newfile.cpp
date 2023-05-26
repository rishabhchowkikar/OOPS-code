#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the number of element: ";
    cin >> size;

    int *p = new int[size];
    cout << "enter the element: ";
    for (int i = 0; i < size; i++)
    {
        cin >> p[i];
    }
    cout << "check the element: \n";
    for (int i = 0; i < size; i++)
    {
        cout << p[i] << " ";
    }

    delete[] p;

    cout << "\n";
    cout << "Enter the number of element: ";
    cin >> size;
    p = new int[size];
    cout << "enter the element: ";
    for (int i = 0; i < size; i++)
    {
        cin >> p[i];
    }
    cout << "check the element: \n";
    for (int i = 0; i < size; i++)
    {
        cout << p[i] << " ";
    }
    delete[] p;
    p = nullptr;
    return 0;
}
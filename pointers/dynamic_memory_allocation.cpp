#include <iostream>
using namespace std;
int main()
{
    int *p = new int[5];
    cout << "enter the element in array: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> p[i];
    }
    cout << "Check the element: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }

    delete[] p;
    p = nullptr;
    return 0;
}
#include <iostream>
using namespace std;

int *function(int size)
{
    int *p = new int[size];
    for (int i = 0; i < size; i++)
    {
        p[i] = i * 9;
    }
    cout << p << endl;
    return p;
}

int main()
{
    int size;
    cout << "enter the size: ";
    cin >> size;
    int *q = function(size);
    for (int i = 0; i < size; i++)
    {
        cout << q[i] << " ";
    }
    cout << q << endl;
    delete[] q;
    return 0;
}
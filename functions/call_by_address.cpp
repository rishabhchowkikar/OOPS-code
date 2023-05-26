#include <iostream>
using namespace std;
int swap(int *a, int *b)
{
    int temp = *a; // dereferencing
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 10, y = 20;
    cout << x << " " << y << endl;
    swap(&x, &y);
    cout << x << " " << y << endl;
    return 0;
}
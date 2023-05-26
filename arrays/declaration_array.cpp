#include <iostream>
using namespace std;
int main()
{
    int a[10] = {2,
                 4,
                 6,
                 8,
                 10,
                 12,
                 14,
                 16,
                 18,
                 20};
    float A[6] = {2.5f,
                  2.3f,
                  6,
                  6.5f,
                  3.2f};
    char c[] = {'A',
                'B',
                66, 'C', 68};
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << a[i] << " ";
    // }
    for (int x : a)
    {
        cout << x << " ";
    }
    cout << "\n";
    for (auto x : A)
    {
        cout << x << " ";
    }
    cout << "\n";
    for (auto x : c)
    {
        cout << x << " ";
    }
    return 0;
}
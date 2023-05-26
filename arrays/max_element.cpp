#include <iostream>
using namespace std;
int main()
{
    int A[] = {4, 8, 6, 9, 5, 2, 7};
    int max = A[0];

    // for (int i = 1; i < 7; i++)
    // {
    //     if (max < A[i])
    //     {
    //         max = A[i];
    //     }
    // }
    for (int x : A)
    {
        if (max < x)
        {
            max = x;
        }
    }
    cout << "The maximum number in array: " << max;
    return 0;
}
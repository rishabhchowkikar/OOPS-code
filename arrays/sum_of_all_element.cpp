#include <iostream>
using namespace std;
int main()
{
    int A[7] = {4, 8, 6, 9, 5, 2, 7};
    int sum = 0;
    for (auto x : A)
    {
        sum = sum + x;
    }
    cout << "The sum of all elment of array: " << sum;
    return 0;
}
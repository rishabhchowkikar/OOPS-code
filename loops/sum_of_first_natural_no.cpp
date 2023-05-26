#include <iostream>
using namespace std;
int main()
{
    int count;
    cout << "Enter the value to find the sum to find: ";
    cin >> count;
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum = sum + i;
    }
    cout << "the sum of " << count << " natural number: " << sum;
    return 0;
}
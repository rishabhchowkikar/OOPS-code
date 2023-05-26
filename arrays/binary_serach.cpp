#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int a[n] = {6, 8, 13, 17, 20, 22, 25, 28, 30, 35};
    int key;
    int low = 0, high = 9, mid;
    cout << "Enter the key: ";
    cin >> key;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == a[mid])
        {
            cout << "key element found at: " << mid;
            return 0;
        }
        else if (key < a[mid])
        {
            high = mid--;
        }
        else
        {
            low = mid++;
        }
    }
    cout << "not found";
    return 0;
}
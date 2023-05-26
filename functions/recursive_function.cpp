#include <iostream>
using namespace std;
int count(int n)
{
    int r;
    if (n >= 0)
    {
        cout << n << endl;
        r = count(n - 1);
        return r;
    }
}
int main()
{
    int x;
    cout << "Enter value: ";
    cin >> x;
    count(x);
    return 0;
}
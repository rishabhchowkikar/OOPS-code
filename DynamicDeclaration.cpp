#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 5;
    {
        if (int c = a + b; c > 10)
        {
            cout << c << endl;
        }
    }
    // cout << c << endl;
}
#include <iostream>
using namespace std;
int x = 10; // global variable
int main()
{
    int x = 20; // local variable to main block
    {
        int x = 30; // local variable to block
        cout << x << endl;
    }
    cout << x << endl;
    cout << ::x << endl;

    return 0;
}
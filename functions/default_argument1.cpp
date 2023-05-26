#include <iostream>
using namespace std;

// int sum(int a, int b)
// {
//     return a + b;
// }

int sum(int a, int b, int c = 0) // here c is default arguments hence this function called default argument function
{
    return a + b + c;
}
int main()
{
    cout << sum(10, 5) << endl;
    cout << sum(10, 5, 15) << endl;
    cout << sum(10, 5, 0) << endl;

    return 0;
}
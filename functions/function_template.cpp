#include <iostream>
using namespace std;

// int maximum(int a, int b)
// {
//     return a > b ? a : b;
// }
// float maximum(float a, float b)
// {
//     return a > b ? a : b;
// }

template <class t> // this is how we define a template function
t maximum(t x, t y)
{
    return x > y ? x : y;
}
int main()
{
    cout << maximum(10, 6) << endl;
    cout << maximum(152.6f, 32.6f) << endl;
    cout << maximum(1.2, 5.6) << endl;
    return 0;
}
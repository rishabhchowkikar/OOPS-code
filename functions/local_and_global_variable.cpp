#include <iostream>
using namespace std;
int g = 5; // global variable accessible by any function
void fun()
{               // demo
    int a = 10; // local variable accessible only by function in which it is defined
    a++;
    g++;
    cout << a << endl;
    cout << g << endl;
}
int main()
{
    cout << g << endl;
    fun();
    cout << g << endl;
}
#include <iostream>
using namespace std;
int main()
{
    int number;
    float sum;
    cout << "Enter the nth term to find the number: ";
    cin >> number;
    sum = (number * (number + 1)) / 2;
    cout << "The sum of nth term is:" << sum;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    float fterm, distance;
    int n;
    float sum;
    cout << "t = a + (n-1)d \n";
    cout << "Enter the first term and distance between two term :";
    cin >> fterm >> distance;
    cout << "Enter the value of n";
    cin >> n;
    sum = fterm + (n - 1) * distance;
    cout << "the term at the nth term would be : " << sum;
    // t = a + (n-1)d;
    return 0;
}
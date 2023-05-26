#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    float average;
    cout << "Enter the number of element: ";
    cin >> n;
    int a[n];
    cout << "Enter element: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    average = (float)sum / n;
    cout << "the average of all element: " << average;
}
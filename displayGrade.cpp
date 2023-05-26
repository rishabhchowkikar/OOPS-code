#include <iostream>
using namespace std;
int main()
{
    int m1, m2, m3;
    float total;
    float avg;
    cout << "Enter the marks of each (3) subjects: ";
    cin >> m1 >> m2 >> m3;
    total = m1 + m2 + m3;
    avg = (total / 3.0);
    if (avg > 60)
    {
        cout << "You got Grade A";
    }
    else if (avg > 35 && avg < 60)
    {
        cout << "You got Grade B";
    }
    else
    {
        cout << "Fail";
    }
    return 0;
}
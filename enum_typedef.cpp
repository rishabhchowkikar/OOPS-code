#include <iostream>
using namespace std;
enum day
{
    monday,
    tuesday,
    wednesday,
    thursday = 5,
    friday,
    saturday,
    sunday
};
typedef int marks;

int main()
{
    day d;
    marks m1 = 80, m2 = 95, m3 = 70;
    d = tuesday;
    cout << friday << endl;
    cout << m1 << m2 << m3 << endl;
    return 0;
}
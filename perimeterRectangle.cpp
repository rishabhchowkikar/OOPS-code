#include <iostream>
using namespace std;
int main()
{
    float length, breath, perimeter;
    cout << "Please enter the length and breath of rectangle: ";
    cin >> length >> breath;
    perimeter = 2 * (length + breath);
    cout << "the perimeter of given rectangle would be : " << perimeter;
    return 0;
}
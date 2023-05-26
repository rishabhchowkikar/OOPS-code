#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    // while loop

    // while (i < 10)
    // {
    //     cout << "Hello"
    //          << " " << endl;
    //     i++;
    // }

    // do-while loop
    /*do
    {
        cout << i << " "
             << "Hello"
             << " " << endl;
        i++;
    } while (i < 10);*/

    // for loop
    cout << "Enter the value of n: ";
    cin >> n;
    for (; i <= n; i++)
    {
        cout << i << " "
             << "Hello"
             << " " << endl;
    }

    return 0;
}

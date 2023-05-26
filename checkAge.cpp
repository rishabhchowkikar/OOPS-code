#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your Age";
    cin >> age;
    if (age >= 12 && age <= 50)
    {
        cout << "\nYoung";
    }
    else
    {
        cout << "\nNot Young";
    }

    if (age <= 12 || age >= 50)
    {
        cout << "\nOffer exclusively for child and old person";
    }
    else
    {
        cout << "\nYou are young persong this offer is not for you";
    }
    return 0;
}
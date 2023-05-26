#include <iostream>
using namespace std;
int main()
{
    int bill;
    int finalBill;
    float discountedBill;
    cout << "Please enter your bill Total: ";
    cin >> bill;
    if (bill >= 500)
    {
        cout << " You got an discount of 20 percent on your shopping";
        discountedBill = bill * 0.2;
        finalBill = bill - discountedBill;
        cout << "\n the new bill would be: " << finalBill << " and got an discount of :" << discountedBill << endl;
    }
    else if (bill >= 100)
    {
        cout << " You got an discount of 10 percent on your shopping";
        discountedBill = bill * 0.1;
        finalBill = bill - discountedBill;
        cout << "\n the new bill would be: " << finalBill << " and got and discount of: " << discountedBill << endl;
    }
    else
    {
        cout << "sorry no discount would be granted below 100 rupees";
    }
    return 0;
}
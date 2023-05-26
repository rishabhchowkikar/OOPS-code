#include <iostream>
using namespace std;
class Account
{
private:
    int d_money;
    int w_money;

public:
    void deposit_money()
    {
        int x;
        cout << "How much money you want to deposit: ";
        cin >> x;
        if (x > 50000)
        {
            cout << "only 50000 can be deposited at an time" << endl;
            d_money = 50000;
            cout << "last deposit" << d_money << endl;
        }
        else
        {
            d_money = x;
            cout << "recent deposited money: " << d_money << endl;
        }
    }
    void withdraw_money()
    {
        int pin;
        cout << "enter the pin: ";
        cin >> pin;
        if (pin == 1111)
        {
            cout << "how much money need to withdraw: " << endl;
            cin >> w_money;
            if (d_money < w_money)
            {
                cout << "insufficient balance" << endl;
            }
            else
            {
                cout << "here is your money " << w_money << endl;
                d_money = d_money - w_money;
                cout << "money left: " << d_money << endl;
            }
        }
        else
        {
            cout << "invalid pin" << endl;
        }
    }
    void checkbalance()
    {
        cout << "balanaced amount: " << d_money << endl;
    }
};
int main()
{
    Account Rishabh;
    int choice;

    while (1)
    {
        cout << "Hello! enter the choice: " << endl;
        cout << "1). deposit money\n 2). withdraw money 3)check Balance" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            Rishabh.deposit_money();
            break;
        case 2:
            Rishabh.withdraw_money();
            break;
        case 3:
            Rishabh.checkbalance();
            break;
        default:
            cout << "invalid operation";
            break;
        }
    }

    return 0;
}
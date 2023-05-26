#include <iostream>
using namespace std;
class Time
{
private:
    int hr;
    int min;

public:
    Time(int h = 0, int m = 0)
    {
        if (h <= 24)
        {
            hr = h;
            if (m <= 60)
            {
                min = m;
            }
            else
            {
                cout << "invalid minute entry" << endl;
            }
        }
        else
        {
            cout << "invalid" << endl;
        }
    }
    void gethrs_min()
    {
        int x, y;
        cout << "hours and minute: ";
        cin >> x >> y;
        if (x <= 24)
        {
            hr = x;
            if (y <= 60)
            {
                min = y;
            }
            else
            {
                cout << "invalid minute entry" << endl;
            }
        }
        else
        {
            cout << "invalid" << endl;
        }
    }

    friend Time operator+(Time t1, Time t2);

    void display()
    {
        cout << "hrs: " << hr << " and min: " << min << endl;
    }
};

Time operator+(Time t1, Time t2)
{
    Time temp;
    temp.hr = t1.hr + t2.hr;
    temp.min = t1.min + t2.min;
    return temp;
}
int main()
{
    Time t(23, 56);
    Time t1(22, 56);
    Time t3;
    t3 = t + t1;
    t.display();
    t1.display();
    t3.display();
    return 0;
}
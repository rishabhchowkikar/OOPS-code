#include <iostream>
using namespace std;
class BasicCar
{
public:
    void start()
    {
        cout << "Basic cars starts" << endl;
    }
    virtual void stop()
    {
        cout << "Basic cars stops" << endl;
    }
};

class AdvanceCar : public BasicCar
{
public:
    void start()
    {
        cout << "Advance Car starts" << endl;
    }
    void stop()
    {
        cout << "Advnace cars stops" << endl;
    }
};

int main()
{
    // AdvanceCar a;
    // a.start();

    // BasicCar b;
    // b.start();

    BasicCar *p;
    AdvanceCar obj;
    p = &obj;
    p->start();
    p->stop();
    return 0;
}
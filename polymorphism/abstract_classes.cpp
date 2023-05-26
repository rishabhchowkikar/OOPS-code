#include <iostream>
using namespace std;

// normal class with virtual function
// class Car
// {
// public:
//     virtual void start()
//     {
//         cout << "car start" << endl;
//     }
// };

// abstract class
class Car
{
public:
    virtual void start() = 0;
};
// purpose of abstract class to force the child class to override the base class function

// derived class
class Innnova : public Car
{
public:
    void start()
    {
        cout << "Innova start" << endl;
    }
};
class Swift : public Car
{
public:
    void start()
    {
        cout << "Swift start" << endl;
    }
};
int main()
{

    Car *ptr;
    ptr = new Innnova();
    ptr->start();
    return 0;
}
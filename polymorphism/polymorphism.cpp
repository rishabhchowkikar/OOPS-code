#include <iostream>
using namespace std;
class Car
{
public:
    virtual void start() = 0;
    // {
    //     cout << "Car started" << endl;
    // }
};

class Innova : public Car
{
public:
    void start() { cout << "Innova start" << endl; }
};

class Swift : public Car
{
public:
    void start() { cout << "Swift started" << endl; }
};

class Innova_c : public Innova
{
public:
    void start() { cout << "Innova_c start" << endl; }
};

int main()
{
    Car *c;
    Innova i;
    c = &i;
    c->start();
    // from the start function first class function is invoked

    Swift s;
    c = &s;
    c->start();
    // here the start function of second class is being invoked
    // this mechanism is totally known to be runtime polymorphism

    Innova *ptr;
    Innova_c ic;
    ptr = &ic;
    ptr->start();
    return 0;
}
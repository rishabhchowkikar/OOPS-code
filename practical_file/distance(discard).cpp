#include <iostream>
using namespace std;
class classA
{
private:
    int meters;
    int centimeters;

public:
    void get()
    {
        cout << "Enter the value of meters and centimeter: ";
        cin >> meters >> centimeters;
    }
    void display()
    {
        cout << "the distance is: " << meters << " m and " << centimeters << " cm" << endl;
    }
    int returnMeters()
    {
        return meters;
    }
    int returncentimeters()
    {
        return centimeters;
    }

    friend classA &operator+(const classB &objb);
};
classA &operator+(const classB &objb)
{
    return classA(returnMeters + objb.returnFeet);
}
classA &operator+(const classB &objb)
{
    return classA(returncentimeters + objb.returnIncehs);
}

class classB
{
private:
    int feet;
    int inches;

public:
    void get()
    {
        cout << "Enter the value of feet and inches: ";
        cin >> feet >> inches;
    }
    void display()
    {
        cout << "the distance is: " << feet << " f and " << inches << " inches" << endl;
    }
    int returnFeet()
    {
        return (feet * 0.3048);
    }
    int returnInches()
    {
        return (inches * 2.54);
    }
};

int main()
{
    classA c1;
    c1.get();
    c1.display();

    classB c2;
    c2.get();
    c2.display();

    classA result = c1 + c2;
    return 0
}
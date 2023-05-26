#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    int empID;
    string empName;

public:
    void get()
    {
        cout << "Enter the employee id: ";
        cin >> empID;
        cin.ignore();
        cout << "enter the employee name: ";
        // cin >> empName;
        getline(cin, empName);
    }
    void display()
    {
        cout << "the entered credential: " << empID << " & " << empName << endl;
    }
};

class full_time_emp : public Employee
{
private:
    int salary;

public:
    void get()
    {
        Employee::get();
        cout << "enter your salary: ";
        cin >> salary;
    }
    void display()
    {
        Employee::display();
        cout << "salary: " << salary << endl;
    }
};

class part_time_emp : public Employee
{
private:
    int wages;

public:
    void get()
    {
        Employee::get();
        cout << "Enter the wages of daily earners: ";
        cin >> wages;
    }
    void display()
    {
        Employee::display();
        cout << "entered wages are: " << wages;
    }
};
int main()
{
    // Employee e;
    // e.get();
    // e.display();

    full_time_emp f;
    f.get();
    f.display();

    cout << endl;

    part_time_emp p;
    p.get();
    p.display();
    return 0;
}
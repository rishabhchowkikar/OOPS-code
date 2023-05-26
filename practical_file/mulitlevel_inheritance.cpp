#include <iostream>
using namespace std;
class University
{
private:
    string uname;

public:
    void get()
    {
        cout << "Enter the University name: " << endl;
        getline(cin, uname);
    }
    void display()
    {
        cout << "the univerisy name is: " << uname << endl;
    }
};

class School : public University
{
private:
    string sname;

public:
    void get()
    {
        cout << "Enter the School name: " << endl;
        getline(cin, sname);
    }
    void display()
    {
        cout << "the school name is: " << sname << endl;
    }
};

class Department : public School
{
private:
    string dname;

public:
    void get()
    {
        cout << "Enter the Department name: " << endl;
        getline(cin, dname);
    }
    void display()
    {
        cout << "the Department name is: " << dname << endl;
    }
};

class Student : public Department
{
private:
    string stdname;

public:
    void get()
    {
        University::get();
        School::get();
        Department::get();
        cout << "enter the student name: " << endl;
        getline(cin, stdname);
    }
    void display()
    {
        University::display();
        School::display();
        Department::display();
        cout
            << "the student name is: " << stdname << endl;
    }
};

int main()
{
    Student s;
    s.get();
    s.display();
    return 0;
}

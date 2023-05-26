#include <iostream>
using namespace std;
class Student
{
private:
    int roll;
    string name;
    int phyMarks, chemMarks, mathsMarks;
    int total;

public:
    Student()
    {
        getMarks();
        display();
    }
    void getMarks()
    {
        cout << "Enter the roll number and name: ";
        cin >> roll >> name;
        cout << "enter the marks of physics , chemistry and maths: ";
        cin >> phyMarks >> chemMarks >> mathsMarks;
        if (phyMarks < 0)
        {
            phyMarks = 1;
            cout << "Marks can't be negative";
        }
        if (chemMarks < 0)
        {
            chemMarks = 1;
            cout << "Marks can't be negative";
        }
        if (mathsMarks < 0)
        {
            mathsMarks = 1;
            cout << "Marks can't be negative";
        }
    }
    void display()
    {
        cout << "Name of the student: " << name << endl;
        cout << "Roll no." << roll << endl;
        displayGrade();
    }

    int percentage(int l)
    {
        return (l / 300);
    }
    void displayGrade()
    {
        total = phyMarks + chemMarks + mathsMarks;
        if (percentage(total) < 40)
        {
            cout << "you got C grade" << endl;
        }
        else if (percentage(total) < 60)
        {
            cout << "you got B grade" << endl;
        }
        else if (percentage(total) < 90)
        {
            cout << "you got A grade" << endl;
        }
        else
        {
            cout << "you got O grade" << endl;
        }
    }
    ~Student()
    {
        cout << "destructor is called" << endl;
    }
};

int main()
{
    Student s1;
}
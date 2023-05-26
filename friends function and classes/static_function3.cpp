#include <iostream>
using namespace std;
class Student
{
public:
    int rollno;
    string name;
    static int addmin_no;

    Student(string n)
    {
        name = n;
        addmin_no++;
        rollno = addmin_no;
    }

    static int getno()
    {
        return addmin_no;
    }
    void display()
    {
        cout << "Name " << name << endl
             << "Roll no" << rollno << endl;
    }
};
int Student::addmin_no = 0;
int main()
{
    Student s1("Rishabh");
    Student s2("Rakshit");
    Student s3("Nishant");
    s1.display();
    s2.display();
    s3.display();

    cout << "Number of addmission no: " << Student::addmin_no << endl;
    return 0;
}
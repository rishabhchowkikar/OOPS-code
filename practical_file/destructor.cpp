#include <iostream>
using namespace std;
class Name
{
private:
    string name;

public:
    Name()
    {
        cout << "constructor is called" << endl;
        get();
    }
    void get()
    {
        cout << "Enter your name" << endl;
        getline(cin, name);
    }
    void display()
    {
        cout << "the name entered is : " << name << endl;
    }
    ~Name()
    {
        cout << "destructor is called" << endl;
    }
};
int main()
{
    Name n;
    n.display();
    return 0;
}
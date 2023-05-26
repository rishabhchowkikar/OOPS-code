#include <iostream>
using namespace std;

void show_meassage(string pop)
{
    cout << "Message: " << pop << endl;
}

void show_meassage()
{
    show_meassage("Default message");
}
int main()
{
    //  cout << "calling the function with an argument\n";
    show_meassage("Where is the message");

    cout << endl;

    // cout << "calling the function without an argument";
    show_meassage();
    return 0;
}
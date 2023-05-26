#include <iostream>
using namespace std;
int main()
{
    float salary;
    float percentageAllowance;
    float percentageDeduction;
    float netSalary;

    cout << "Enter the salary: ";
    cin >> salary;
    cout << "Percentage of Allowance: ";
    cin >> percentageAllowance;
    cout << "Percentage of Deduction: ";
    cin >> percentageDeduction;

    netSalary = salary + (salary * (percentageAllowance) / 100) - (salary * (percentageDeduction) / 100);
    cout << "net salary would be: " << netSalary;
    return 0;
}
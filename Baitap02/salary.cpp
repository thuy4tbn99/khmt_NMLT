#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int main() {
    // Constants
    const double HOURLY_WAGE = 16.78;
    const double REGULAR_HOURS = 37.5;
    const double OVERTIME_MULTIPLIER = 1.5;
    const double SOCIAL_SECURITY_TAX = 0.05;
    const double INCOME_TAX = 0.12;
    const double UNION_DUES = 10.0;
    const double HEALTH_INSURANCE = 35.0;

    // Variables
    double hoursWorked;
    int numChildren;
    double grossSalary = 0.0, netSalary = 0.0, deductions = 0.0;

    while(true){
        // Input
    cout << "Enter the number of hours worked in a week: ";
    cin >> hoursWorked;
    cout << "Enter the number of children: ";
    cin >> numChildren;

    // Calculate gross salary
    if (hoursWorked > REGULAR_HOURS) {
        double overtimeHours = hoursWorked - REGULAR_HOURS;
        grossSalary = (REGULAR_HOURS * HOURLY_WAGE) + (overtimeHours * HOURLY_WAGE * OVERTIME_MULTIPLIER);
    } else {
        grossSalary = hoursWorked * HOURLY_WAGE;
    }

    // Calculate deductions
    double socialSecurity = grossSalary * SOCIAL_SECURITY_TAX;
    double incomeTax = grossSalary * INCOME_TAX;
    double healthInsurance = (numChildren >= 3) ? HEALTH_INSURANCE : 0.0;
    deductions = socialSecurity + incomeTax + UNION_DUES + healthInsurance;

    // Calculate net salary
    netSalary = grossSalary - deductions;

    // Output results
    cout << fixed << setprecision(2);
    cout << "Gross Salary: $" << grossSalary << endl;
    cout << "Net Salary: $" << netSalary << endl;
    }


    return 0;
}


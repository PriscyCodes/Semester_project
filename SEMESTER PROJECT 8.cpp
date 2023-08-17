#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    double hourlyRate;
    double hoursWorked;

public:
    Employee(string n, double rate, double hours) {
        name = n;
        hourlyRate = rate;
        hoursWorked = hours;
    }

    double calculatePay() {
        double overtimePay = 0;
        double regularPay = 0;

        if (hoursWorked > 40) {
            overtimePay = (hoursWorked - 40) * (hourlyRate * 1.5);
            regularPay = 40 * hourlyRate;
        } else {
            regularPay = hoursWorked * hourlyRate;
        }

        return regularPay + overtimePay;
    }
};

int main() {
    string name;
    double hourlyRate;
    double hoursWorked;

    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "Enter hourly rate: ";
    cin >> hourlyRate;

    cout << "Enter hours worked: ";
    cin >> hoursWorked;

    Employee emp(name, hourlyRate, hoursWorked);

    cout << "Pay for " << emp.calculatePay() << " USD" << endl;

    return 0;
}


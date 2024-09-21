#include <iostream>
using namespace std;

int main() {
    int accountNumber = 0;
    double balance = 0.0, charges = 0.0, credits = 0.0, creditLimit = 0.0;

    while (true) {
        cout << "Enter account number (-1 to quit): ";
        cin >> accountNumber;

        if (accountNumber == -1) {
            cout << "Exiting program..." << endl;
            break; // Exit the loop
        }

        cout << "Enter beginning balance: ";
        cin >> balance;
        cout << "Enter total charges: ";
        cin >> charges;
        cout << "Enter total credits: ";
        cin >> credits;
        cout << "Enter credit limit: ";
        cin >> creditLimit;

        double newBalance = balance + charges - credits;
        cout << "\nAccount number: " << accountNumber << endl;
        cout << "New balance is: " << newBalance << endl;

        if (newBalance > creditLimit) {
            cout << "Credit limit exceeded!" << endl;
        }
    }

    return 0;
}


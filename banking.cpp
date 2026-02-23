#include <iostream>
using namespace std;

void showBalance(double balance);
void addBalance(double &balance);
void withdrawal(double &balance);

int main() {
    double balance = 5000;
    int choose;

    cout << "1. Show Balance\n";
    cout << "2. Add Balance\n";
    cout << "3. Withdraw\n";
    cout << "Enter choice: ";
    cin >> choose;

    switch (choose) {
        case 1:
            showBalance(balance);
            break;
        case 2:
            addBalance(balance);
            break;
        case 3:
            withdrawal(balance);
            break;
        default:
            cout << "Invalid choice\n";
    }

    cout << "current balance: " << balance << endl;
    return 0;
}

void showBalance(double balance) {

}

void addBalance(double &balance) {
    double amount;
    cout << "Enter amount to add: ";
    cin >> amount;
    balance += amount;
}

void withdrawal(double &balance) {
    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount > balance) {
        cout << "Insufficient funds\n";
    } else {
        balance -= amount;
    }
}
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;
    string accountHolder;

public:

    void setAccountNumber(string accNum) {
        accountNumber = accNum;
    }

    void setBalance(double bal) {
        if (bal >= 0) {
            balance = bal;
        } else {
            cout << "Invalid balance! Balance cannot be negative." << endl;
        }
    }

    void setAccountHolder(string holder) {
        accountHolder = holder;
    }


    string getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }

    string getAccountHolder() {
        return accountHolder;
    }


    void displayAccountDetails() {
        cout << "Account Details:" << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {

    BankAccount account;

    account.setAccountNumber("123456789");
    account.setAccountHolder("sojib ");
    account.setBalance(1000.50);

    account.displayAccountDetails();

    account.setBalance(-500.75);

    return 0;
}

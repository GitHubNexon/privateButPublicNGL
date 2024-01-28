#include <iostream>
#include <string>

class BankAccount {
private:
    // Private data members
    std::string accountNumber;
    double balance;

public:
    // Public member functions

    // Constructor
    BankAccount(const std::string& accNumber, double initialBalance) {
        accountNumber = accNumber;
        balance = initialBalance;
    }

    // Deposit method
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposit of $" << amount << " successful.\n";
        } else {
            std::cout << "Invalid deposit amount.\n";
        }
    }

    // Withdrawal method
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal of $" << amount << " successful.\n";
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds.\n";
        }
    }

    // Display method
    void displayAccountDetails() const {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
};

int main() {
    // Create a BankAccount object
    BankAccount myAccount("12345", 1000.0);

    // Access public member functions to perform operations
    myAccount.displayAccountDetails();

    myAccount.deposit(500.0);
    myAccount.displayAccountDetails();

    myAccount.withdraw(200.0);
    myAccount.displayAccountDetails();

    myAccount.withdraw(1500.0); // Attempting to withdraw more than the balance
    myAccount.displayAccountDetails();

    return 0;
}


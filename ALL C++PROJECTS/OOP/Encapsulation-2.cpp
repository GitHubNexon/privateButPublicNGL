#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    double balance;

public:
    BankAccount(const std::string& accNumber, double initialBalance) {
        accountNumber = accNumber;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposit of $" << amount << " successful.\n";
        } else {
            std::cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal of $" << amount << " successful.\n";
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds.\n";
        }
    }

    void displayAccountDetails() const {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
};

int main() {
    // Get initial values from user
    std::string accountNumber;
    double initialBalance;

    std::cout << "Enter account number: ";
    std::getline(std::cin, accountNumber);

    std::cout << "Enter initial balance: $";
    std::cin >> initialBalance;

    // Create a BankAccount object
    BankAccount myAccount(accountNumber, initialBalance);

    // Perform operations based on user input
    int choice;
    double amount;

    do {
        std::cout << "\n1. Deposit\n";
        std::cout << "2. Withdraw\n";
        std::cout << "3. Display Account Details\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter deposit amount: $";
                std::cin >> amount;
                myAccount.deposit(amount);
                break;
            case 2:
                std::cout << "Enter withdrawal amount: $";
                std::cin >> amount;
                myAccount.withdraw(amount);
                break;
            case 3:
                myAccount.displayAccountDetails();
                break;
            case 0:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 0);

    return 0;
}


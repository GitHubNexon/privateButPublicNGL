#include <iostream>
#include <string>

class BankAccount {
protected:
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

    virtual void withdraw(double amount) {
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

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(const std::string& accNumber, double initialBalance, double rate)
        : BankAccount(accNumber, initialBalance), interestRate(rate) {}

    void applyInterest() {
        double interestAmount = balance * (interestRate / 100.0);
        deposit(interestAmount);
        std::cout << "Interest applied: $" << interestAmount << std::endl;
    }

    void withdraw(double amount) override {
        const double penalty = 10.0;

        if (amount > 0 && amount <= balance) {
            balance -= (amount + penalty);
            std::cout << "Withdrawal of $" << amount << " with penalty. Total deducted: $" << (amount + penalty) << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds.\n";
        }
    }
};

int main() {
    // Get initial values from user
    std::string accountNumber;
    double initialBalance, interestRate;

    std::cout << "Enter account number: ";
    std::getline(std::cin, accountNumber);

    std::cout << "Enter initial balance: $";
    std::cin >> initialBalance;

    std::cout << "Enter interest rate: ";
    std::cin >> interestRate;

    // Create a SavingsAccount object using user input
    SavingsAccount mySavings(accountNumber, initialBalance, interestRate);

    // Perform operations based on user input
    int choice;
    double amount;

    do {
        std::cout << "\n1. Deposit\n";
        std::cout << "2. Withdraw\n";
        std::cout << "3. Apply Interest\n";
        std::cout << "4. Display Account Details\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter deposit amount: $";
                std::cin >> amount;
                mySavings.deposit(amount);
                break;
            case 2:
                std::cout << "Enter withdrawal amount: $";
                std::cin >> amount;
                mySavings.withdraw(amount);
                break;
            case 3:
                mySavings.applyInterest();
                break;
            case 4:
                mySavings.displayAccountDetails();
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


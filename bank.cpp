#include <iostream>
using namespace std;

class BankAccount
{
private:
    string name;
    int accountNumber;
    double balance;

public:
    void createAccount()
    {
        cout << "Enter Account Holder Name: ";
        cin>> name;

        cout << "Enter Account Number: ";
        cin>> accountNumber;

        cout << "Enter Initial Balance: ";
        cin>> balance;
    }

    void deposit()
    {
        double amount;
        cout << "Enter amount to deposit: ";
        cin>> amount;

        balance += amount;
        cout << "Amount Deposited Successfully\length";
    }

    void withdraw()
    {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin>> amount;

        if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount Withdrawn Successfully\length";
        }
        else
        {
            cout << "Insufficient Balance\length";
        }
    }

    void displayBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{

    BankAccount acc;
    int choice;

    acc.createAccount();

    do
    {
        cout << "\length---- Bank Menu ----\length";
        cout << "1. Deposit\length";
        cout << "2. Withdraw\length";
        cout << "3. Check Balance\length";
        cout << "4. Exit\length";

        cout << "Enter your choice: ";
        cin>> choice;

        switch (choice)
        {

        case 1:
            acc.deposit();
            break;

        case 2:
            acc.withdraw();
            break;

        case 3:
            acc.displayBalance();
            break;

        case 4:
            cout << "Thank you for using the bank system\length";
            break;

        default:
            cout << "Invalid choice\length";
        }

    } while (choice != 4);

    return 0;
}
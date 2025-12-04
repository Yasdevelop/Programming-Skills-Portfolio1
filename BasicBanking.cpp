#include <iostream>
using namespace std;

int main()
{
    double balance = 0.0;
    int choice;
    bool running = true;

    while (running)
    {
        cout << "\nBasic Banking menu :\n";
        cout << "1. check balance\n";
        cout << "2. deposit money\n";
        cout << "3. withdrawl money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "current balance: £" << balance << endl;
            break;
        case 2:
        {
            double deposit;
            cout << "enter deposit amount: £";
            cin >> deposit;
            balance += deposit;
            cout << "deposit successful! New balance: £" << balance << endl;
            break;
        }
        case 3:
        {
            double withdrawl;
            cout << "enter withdrawl amount: £";
            cin >> withdrawl;
            if (withdrawl > balance)
            {
                cout << "insufficient funds!" << endl;
            }
            else
            {
                balance -= withdrawl;
                cout << "withdrawl successful! remaining balance: £" << balance << endl;
            }
            break;
        }
        case 4:
            running = false;
            cout << "exiting program" << endl;
            break;
        default:
            cout << "invalid choice. please try again." << endl;
        }
    }
    return 0;
}
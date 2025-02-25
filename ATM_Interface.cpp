#include <iostream>
#include <string>

using namespace std;

class Bank {
private:
    string name;
    long long accnumber;
    char type[10];
    long long amount = 0;
    long long tot = 0;

public:
    void setvalue() {
        cout << "Enter name:\n";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Account number:\n";
        cin >> accnumber;
        cout << "Enter Account type:\n";
        cin >> type;
        cout << "Enter Balance:\n";
        cin >> tot;
    }

    void showdata() {
        cout << "Name: " << name << endl;
        cout << "Account No: " << accnumber << endl;
        cout << "Account type: " << type << endl;
        cout << "Balance: " << tot << endl;
    }

    void deposit() {
        cout << "\nEnter amount to be Deposited:\n";
        cin >> amount;
    }

    void showbal() {
        tot += amount;
        cout << "\nTotal balance is: " << tot;
    }

    void withdrawl() {
        int a, avai_balance;
        cout << "Enter amount to withdraw:\n";
        cin >> a;
        avai_balance = tot - a;
        cout << "Available Balance is: " << avai_balance;
    }
};

int main() {
    Bank b;
    int choice;

    while (1) {
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~WELCOME~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~\n\n";
        cout << "Enter Your Choice:\n";
        cout << "\t1. Enter name, Account number, and type\n";
        cout << "\t2. Show account information\n";
        cout << "\t3. Deposit money\n";
        cout << "\t4. Show balance\n";
        cout << "\t5. Withdraw money\n";
        cout << "\t6. Cancel transaction\n";
        cin >> choice;

        switch (choice) {
            case 1:
                b.setvalue();
                break;
            case 2:
                b.showdata();
                break;
            case 3:
                b.deposit();
                break;
            case 4:
                b.showbal();
                break;
            case 5:
                b.withdrawl();
                break;
            case 6:
                cout << "Transaction canceled.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}

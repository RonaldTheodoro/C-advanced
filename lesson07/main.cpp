#include <iostream>

using namespace std;


class Account {
    
    protected:
        double balance;
    
    public:
        Account (double balance) {
            if (balance > 0)
                this->balance = balance;

            else
                balance = 0.0;
        }

        void credit (double amount) {
            this->balance += amount;
        }

        void debit (double amount) {
            if (balance > amount)
                this->balance = this->balance - amount;

            else
                cout << "Insulficient funds" << endl;
        }

        double get_balance () {
            return this->balance;
        }
};


class CheckingAccount : public Account {
    private:
        double fee;

    public:
        CheckingAccount (double balance, double fee) : Account (balance) {
            this->fee = fee;
        }

        void debit (double amount) {
            if (balance > amount)
                this->balance = this->balance - amount - fee;

            else
                cout << "Insufficient funds" << endl;
        }
};


int main () {
    CheckingAccount acct(500, .5);
    acct.credit (100);
    cout << acct.get_balance () << endl;
    acct.debit (50);
    cout << acct.get_balance () << endl;

    
    return 0;
}
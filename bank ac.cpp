#include <iostream>
using namespace std;

class BankAccount {
public:

    BankAccount(string name, int accNumber, double initialBalance)
	 {
        cout << "Account created for " << name << "." << endl;
        cout << "Account Number: " << accNumber << endl;
        cout << "Initial Balance: $" << initialBalance << endl;
    }

    ~BankAccount() 
	{
        cout << "Account closed." << endl;
    }
};

int main() {
    BankAccount account("John Doe", 12345, 1000.00);

    return 0;
}


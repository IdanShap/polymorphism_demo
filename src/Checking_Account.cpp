#include "Checking_Account.h"


// ctor
Checking_Account::Checking_Account(string acc_name, double acc_balance, double_t withdraw_fee)
: Account(acc_name, acc_balance), withdraw_fee{withdraw_fee} {
}

// makes necessary implemantions, and reuses the function from the base class
bool Checking_Account::deposit(const double &amount)
{
    return Account::deposit(amount); 
}

// makes necessary implemantions, and reuses the function from the base class

bool Checking_Account::withdraw(const double &amount)
{
    if(amount <= 0 || acc_balance < amount + withdraw_fee) return false;
    acc_balance -= amount + withdraw_fee;
    return true;
}

// I_Printable inherited function (via Account)
ostream& Checking_Account::to_print(ostream &os)
{
    os << "[Checking Account |Name: " << acc_name << " |Balance: " << acc_balance 
    << " |Withdraw fee: " << withdraw_fee << "%]";
    return os;
}

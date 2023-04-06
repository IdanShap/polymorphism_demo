#include "Savings_Account.h"

// ctor
Savings_Account::Savings_Account(string acc_name, double acc_balance, double_t interest_rate_percent)
: Account(acc_name, acc_balance), interest_rate_percent{interest_rate_percent} {
}

// makes necessary implemantions, and reuses the function from the base class
bool Savings_Account::deposit(const double &amount)
{
    if(amount <= 0) return false;
    acc_balance += amount * (interest_rate_percent/100);
    return Account::deposit(amount); 
}

// makes necessary implemantions, and reuses the function from the base class

bool Savings_Account::withdraw(const double &amount)
{
    return Account::withdraw(amount);
}

// I_Printable inherited function (via Account)
ostream& Savings_Account::to_print(ostream &os)
{
    os << "[Saving Account |Name: " << acc_name << " | Balance: " << acc_balance << " |Interest rate: " 
    << interest_rate_percent << "%]";
    return os;
}


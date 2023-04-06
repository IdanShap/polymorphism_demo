#include "Account.h"

//ctor
Account::Account(string acc_name, double acc_balance)
: acc_name{acc_name}, acc_balance{acc_balance} {
}

bool Account::deposit(const double &amount)
{
    if(amount <= 0) return false;
    acc_balance += amount;
    return true;
}

bool Account::withdraw(const double &amount)
{
    if(acc_balance < amount || amount <= 0) return false;
    acc_balance -= amount;
    return true;
}

double Account::get_balance() const
{
    return acc_balance;
}

// I_Printable inherited vitual funtion
ostream& Account::to_print(ostream &os)
{
    os << "[Account: " << acc_name << " |Balance: " << acc_balance << "]";
    return os;
}


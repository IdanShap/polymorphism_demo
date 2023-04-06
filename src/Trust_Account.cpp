#include "Trust_Account.h"


// ctor
Trust_Account::Trust_Account(string acc_name, double acc_balance, double_t interest_rate_percent)
: Savings_Account(acc_name, acc_balance, interest_rate_percent) {
}

// makes necessary implemantions, and reuses the function from the base class
bool Trust_Account::deposit(const double &amount)
{
    return Savings_Account::deposit(amount); 
}

// makes necessary implemantions, and reuses the function from the base class

bool Trust_Account::withdraw(const double &amount)
{
    if(withdraw_count == 0 || amount <= 0 || acc_balance * (allowed_per_withraw_percent/100) < amount) 
        return false;
    acc_balance -= amount;
    --withdraw_count; // decrementing the withtraw counter
    return true;
}

// I_Printable inherited function (via Account)
ostream& Trust_Account::to_print(ostream &os)
{
    os << "[Trust Account |Name: " << acc_name << " |Balance: " << acc_balance << " |Interest rate: " << interest_rate_percent << "% "
    << " |Withraws left:  " << withdraw_count << "]";
    return os;
}

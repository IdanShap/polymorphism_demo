#ifndef _SAVING_ACC_H_
#define _SAVING_ACC_H_

#include "Account.h"

class Savings_Account : public Account
{

private:
    
protected:
    double_t interest_rate_percent;

public:
    // ctor 
    Savings_Account(string acc_name = "Unnamed Account", double acc_balance = 0, double_t interest_rate_percent = 0);

    // inherited virtual fnctions from Account
    virtual bool deposit(const double &amount) override;
    virtual bool withdraw(const double &amount) override;
    virtual ostream &to_print(ostream &os) override;

    // dtor
    virtual ~Savings_Account() = default;
};

#endif
#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include "Account.h"

class Checking_Account : public Account
{

private:
    
protected:
    double_t withdraw_fee;

public:
    // ctor 
    Checking_Account(string acc_name = "Unnamed Account", double acc_balance = 0, double_t withdraw_fee = 0);

    // inherited virtual fnctions from Account
    virtual bool deposit(const double &amount) override;
    virtual bool withdraw(const double &amount) override;
    virtual ostream &to_print(ostream &os) override;

    // dtor
    virtual ~Checking_Account() = default;
};

#endif
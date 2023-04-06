#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

#include "Savings_Account.h"

class Trust_Account : public Savings_Account
{

private:
    
protected:
    size_t withdraw_count {3};
    double_t allowed_per_withraw_percent {20};

public:
    // ctor 
    Trust_Account(string acc_name = "Unnamed Account", double acc_balance = 0, double_t interest_rate_percent = 0);

    // inherited virtual fnctions from Account
    virtual bool deposit(const double &amount) override;
    virtual bool withdraw(const double &amount) override;
    virtual ostream &to_print(ostream &os) override;

    // dtor
    virtual ~Trust_Account() = default;
};

#endif
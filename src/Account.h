#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>
#include <iostream>
#include "I_Printable.h" // printing interface

using std::string;
using std::ostream;


class Account : public I_Printable
{
private:

protected:
    string acc_name;
    double acc_balance;

public:
    //ctor
    Account(string acc_name = "Unnamed Account", double acc_balance = 0);

    // class functionality
    virtual bool deposit(const double &amount) = 0;
    virtual bool withdraw(const double &ammount) = 0;
    double get_balance() const;

    // inherited from I_Printable
    virtual ostream &to_print(ostream &os) override; 

    //dtor
    virtual ~Account() = default;

};


#endif
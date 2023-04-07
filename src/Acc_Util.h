#ifndef _ACC_UTIL_H_
#define _ACC_UTIL_H_

#include <vector>
#include <iostream>
#include "Account.h"
#include "I_Printable.h"
#include <memory>

using std::vector;
using std::cout;
using std::endl;
using std::shared_ptr;

// some functions to help test the inheritance and polymorphism stacture
void mass_display(const vector <shared_ptr<Account>> &accounts);
void mass_deposit(vector <shared_ptr<Account>> &accounts, const double &amount);
void mass_withdraw(vector <shared_ptr<Account>> &accounts, const double &amount);

#endif
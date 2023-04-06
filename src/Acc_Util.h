#ifndef _ACC_UTIL_H_
#define _ACC_UTIL_H_

#include <vector>
#include <iostream>
#include "Account.h"
#include "I_Printable.h"
#include "Savings_Account.h"

using std::vector;
using std::cout;
using std::endl;

// some functions to help test the inheritance and polymorphism stacture
void mass_display(const vector <Account *> &accounts);
void mass_deposit(vector <Account *> &accounts, const double &amount);
void mass_withdraw(vector <Account *> &accounts, const double &amount);

#endif
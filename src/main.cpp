#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Acc_Util.h"
#include <vector>

using std::vector;

int main()
{

    // Account objects test

    Account *p2 = new Trust_Account{"Ben",7000, 2};
    Account *p3 = new Savings_Account{"John", 5000, 5};
    Account *p4 = new Checking_Account{"Bertrad", 1000, 10};
    
    vector<Account *> accounts;
    accounts.push_back(p2);
    accounts.push_back(p3);
    accounts.push_back(p4);

    // check insertion operator and deposits
    mass_display(accounts);
    mass_deposit(accounts, 500);

    // checks withdraw behavior
    for(auto i{0}; i < 4; i++)
    mass_withdraw(accounts, 500);

    delete p2;
    delete p3;
    delete p4;

    return 0;
}
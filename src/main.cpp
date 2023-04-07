#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Acc_Util.h"
#include <vector>
#include <memory>

using std::vector;
using std::shared_ptr;
using std::make_shared;

int main()
{

    // Account objects test

    
    shared_ptr<Account> p2 = make_shared<Trust_Account>("Ben",7000, 2);
    auto p3 = make_shared<Checking_Account>("John", 5000, 20);
    auto p4 = make_shared<Savings_Account>("Tom", 10000, 2);
    
    vector<shared_ptr<Account>> accounts;
    accounts.push_back(p2);
    accounts.push_back(p3);
    accounts.push_back(p4);

    // check insertion operator and deposits
    mass_display(accounts);
    mass_deposit(accounts, 500);

    // checks withdraw behavior
    for(auto i{0}; i < 4; i++)
    mass_withdraw(accounts, 500);


    return 0;
}
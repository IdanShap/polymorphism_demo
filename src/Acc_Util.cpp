#include "Acc_Util.h"

// some functions to help test the inheritance and polymorphism stacture

void mass_display(const vector <Account *> &accounts)
{
    cout << "Accounts:" << endl ;
    for(auto &acc : accounts)
    {
        cout << *acc << endl;
    }
    cout << "==========================" << endl;
}

void mass_deposit(vector <Account *> &accounts, const double &amount)
{
    cout << "Depositing:" << endl;
    for(auto &acc : accounts)
    {
        if(acc->deposit(amount)){
            cout << "Deposit of " << amount << " was successful for " << *acc << endl;
        } else {
            cout << "Deposit of " << amount << " failed for " << *acc << endl;
        }
    }
    cout << "==========================" << endl;
}

void mass_withdraw(vector <Account *> &accounts, const double &amount)
{
    cout << "Withdrawing:" << endl; 
    for(auto &acc : accounts)
    {
        if(acc->withdraw(amount)){
            cout << "Withraw of " << amount << " was successful for " << *acc << endl;
        } else {
            cout << "Withdraw of " << amount << " failed for " << *acc << endl;
        }
    }
    cout << "==========================" << endl;
}

#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H

#include"BankAccount.h"
class SavingAccount:public BankAccount
{
    double rateOfInterest;
    double minBalance;
    public:
    SavingAccount();
    SavingAccount(std::string aname,int acNumber,int bal,std::string address,double roi,double mb);
    void display();
    void withdraw(int amt);
    void deposit(int amt);

};

#endif // SAVINGACCOUNT_H

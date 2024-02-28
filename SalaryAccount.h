#ifndef SALARYACCOUNT_H
#define SALARYACCOUNT_H

#include"BankAccount.h"
class SalaryAccount:public BankAccount
{
    double rateOfInterest;
    double minBalance;
    public:
    SalaryAccount();
    SalaryAccount(std::string aname,int acNumber,int bal,std::string address,double roi,double mb);
    void display();
    void withdraw(int amt);
    void deposit(int amt);

};

#endif // SALARYACCOUNT_H

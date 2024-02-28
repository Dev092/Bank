#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include<string>
class BankAccount
{
    std::string accountHolderName;
    int accountNumber;
    int balence;
    std::string address;
    public:
    BankAccount();
    BankAccount(std::string aname,int acNumber,int bal,std::string address);
    void display();

    std::string getAccountHolderName() const { return accountHolderName; }
    void setAccountHolderName(const std::string &accountHolderName_) { accountHolderName = accountHolderName_; }

    int getAccountNumber() const { return accountNumber; }
    void setAccountNumber(int accountNumber_) { accountNumber = accountNumber_; }

    int getBalence() const { return balence; }
    void setBalence(int balence_) { balence = balence_; }

    std::string getAddress() const { return address; }
    void setAddress(const std::string &address_) { address = address_; }
};

#endif // BANKACCOUNT_H

#include"SavingAccount.h"
#include"BankAccount.h"
#include<iostream>
#include"BalenceException.h"
SavingAccount::SavingAccount(std::string aname, int acNumber, int bal, std::string add, double roi, double mb)
:BankAccount(aname,acNumber,bal,add),rateOfInterest(roi),minBalance(mb){}


SavingAccount::SavingAccount():rateOfInterest(0.5),minBalance(3000){}

void SavingAccount::display(){
    BankAccount::display();
    std::cout<<rateOfInterest<<" "<<minBalance<<std::endl;
}
void SavingAccount::withdraw(int amt)
{
    if(BankAccount::getBalence()-amt > 3000){
        std::cout<<"You have withdraw "<<amt<<" rupees"<<std::endl;
        BankAccount::setBalence(BankAccount::getBalence()-amt);
        std::cout<<"Remaining balance is :"<<BankAccount::getBalence();
    }else
    throw BalenceException("\n You don't have sufficient balance");

}

void SavingAccount::deposit(int amt)
{
    if(amt>0){
        BankAccount::setBalence(BankAccount::getBalence()+amt);
        std::cout<<amt<<" Deposited sucessfully "<<std::endl;
        std::cout<<"Your current balance is "<<BankAccount::getBalence();
    }else
    throw BalenceException("\n Please enter a valid amount");
    
}

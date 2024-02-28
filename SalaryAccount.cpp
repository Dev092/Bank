#include "SalaryAccount.h"
#include"BankAccount.h"
#include<iostream>
#include"BalenceException.h"
SalaryAccount::SalaryAccount(std::string aname, int acNumber, int bal, std::string add, double roi, double mb)
:BankAccount(aname,acNumber,bal,add),rateOfInterest(roi),minBalance(mb){}


SalaryAccount::SalaryAccount():rateOfInterest(0.5),minBalance(3000){}

void SalaryAccount::display(){
    BankAccount::display();
    std::cout<<rateOfInterest<<" "<<minBalance<<std::endl;
}
void SalaryAccount::withdraw(int amt)
{
    if(BankAccount::getBalence()-amt > 3000){
        std::cout<<"You have withdraw "<<amt<<" rupees"<<std::endl;
        BankAccount::setBalence(BankAccount::getBalence()-amt);
        std::cout<<"Remaining balance is :"<<BankAccount::getBalence();
    }else
    throw BalenceException("\n You don't have sufficient balance");

}

void SalaryAccount::deposit(int amt)
{
    if(amt>0){
        BankAccount::setBalence(BankAccount::getBalence()+amt);
        std::cout<<amt<<" Deposited sucessfully "<<std::endl;
        std::cout<<"Your current balance is "<<BankAccount::getBalence();
    }
    throw BalenceException("\n Please enter a valid amount");
    
}

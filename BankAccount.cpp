#include"BankAccount.h"
#include<iostream>
BankAccount::BankAccount():accountHolderName("Raja"),accountNumber(111),balence(20000),address("Gopalganj"){}
BankAccount::BankAccount(std::string aname, int acNumber, int bal, std::string add)
:accountHolderName(aname),accountNumber(acNumber),balence(bal),address(add)
{
}
void BankAccount::display(){
    std::cout<<accountHolderName<<" "<<accountNumber<<" "<<balence<<" "<<address<<std::endl;
}
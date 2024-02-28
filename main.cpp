#include"BankAccount.h"
#include"SavingAccount.h"
#include"SalaryAccount.h"
#include"BalenceException.h"
#include<iostream>
int main()
{
    try{
        // BankAccount *b1=new SavingAccount("Dev",222,20000,"Samastipur",0.8,3000);
        // b1->display();
        SavingAccount sac;
        sac.deposit(1000);
        sac.withdraw(200);
        sac.display();

    }catch(BalenceException e){
        std::cout<<"Problem occoured: "<<e.what();
    }

    return 0;
}
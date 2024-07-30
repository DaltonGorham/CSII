#include "savings.h"
#include "bankInfo.h"


 Savings :: Savings(double bal, double APR) : BankInfo(bal, APR){
  setActivity();
 }

Savings:: Savings() : BankInfo() {setActivity();}


void Savings::withdraw(int amount){
  if (isActive){
    BankInfo::withdrawalAmount(amount);
  }
  setActivity();
  }

void Savings::deposit(int amount){
  BankInfo::depositAmount(amount);
  setActivity();
}

void Savings::monthlyProc(){
  if (numOfWithdrawals > MAX_MONTLY_WITHDRAWALS){
    monthlyServiceCharge += (numOfWithdrawals - MAX_MONTLY_WITHDRAWALS) * WITHDRAWAL_FEE;
  }
  BankInfo::monthlyProc();
  setActivity();
}


void Savings::setActivity(){
  isActive = balance >= MINIMUM_BALANCE;
}

#include "checking.h"


void Checking::withdraw(int amount){
  if (amount > balance){
    balance -= SERVICE_CHARGE;
  }
  else {
    BankInfo::withdrawalAmount(amount);
  }
}

void Checking::monthlyProc(){
  monthlyServiceCharge += MONTHLY_FEE;
  monthlyServiceCharge += (numOfWithdrawals * WITHDRAWAL_FEE);
  BankInfo::monthlyProc();
}


#include "bankInfo.h"




BankInfo::BankInfo(double bal, double rate) : 
balance(bal), annualIntRate(rate), numOfWithdrawals(0),numOfDeposits(0), monthlyServiceCharge(0), monthStartBal(bal){}

BankInfo::BankInfo() : balance(0),annualIntRate(0), numOfWithdrawals(0), numOfDeposits(0), monthlyServiceCharge(0), monthStartBal(0){}

void BankInfo::depositAmount(double amount){
  balance += amount;
  numOfDeposits++;
}

void BankInfo::withdrawalAmount(double amount){
  balance -= amount;
  numOfWithdrawals++;
}

void BankInfo::calcInt(){
  double monthlyIR = annualIntRate / 12;
  double monthlyIntrest = balance * monthlyIR;
  balance += monthlyIntrest;
}

void BankInfo::monthlyProc(){
  balance -= monthlyServiceCharge;
  calcInt();
}

ostream& operator<<(ostream& strm, BankInfo& account){
  strm << "Starting Balance: $" << account.monthStartBal << endl;
  strm << "Number of Deposits: " << account.getNumOfDeposits() << endl;
  strm << "Number of Withdrawals: " << account.getNumOfWithdrawals() << endl;
  strm << "Service Charges: " << account.getMonthlyService() << endl;
  strm << "Ending Balance: $" << account.getBalance() << endl;
  return strm;
}




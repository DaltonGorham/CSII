#ifndef BankInfo_H
#define BankInfo_H
#include <iostream>
using namespace std;



class BankInfo{
protected:
  double balance;
  int numOfDeposits;
  int numOfWithdrawals;
  double annualIntRate;
  double monthlyServiceCharge;
  double monthStartBal;
public:
  BankInfo();
  BankInfo(double bal, double rate);
  virtual void depositAmount(double amount);
  virtual void withdrawalAmount(double amount);
  virtual void calcInt();
  virtual void monthlyProc();
  double getBalance(){return balance;}
  int getNumOfDeposits(){return numOfDeposits;}
  int getNumOfWithdrawals(){return numOfWithdrawals;}
  double getAPR(){return annualIntRate;}
  double getMonthlyService(){return monthlyServiceCharge;}
  friend ostream& operator<<(ostream& stmr, BankInfo& account);


  friend ostream;
};













#endif
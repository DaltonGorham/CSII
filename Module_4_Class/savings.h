#ifndef Savings_H
#define Savings_H
#include "bankInfo.h"

class Savings : public BankInfo{
  protected:
    bool isActive;
  public: 
    Savings(double bal, double APR);
    Savings();
    virtual void withdraw(int amount);
    virtual void deposit(int amount);
    virtual void monthlyProc();
    virtual void setActivity();
    const int MAX_MONTLY_WITHDRAWALS = 4;
    const double WITHDRAWAL_FEE = 1;
    const double MINIMUM_BALANCE = 25;
};

#endif
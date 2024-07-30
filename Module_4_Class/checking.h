#ifndef Checking_H
#define Checking_H
#include "bankInfo.h"



class Checking : public BankInfo{
  public: 
    using BankInfo::BankInfo;
    virtual void withdraw(int amount);
    virtual void monthlyProc();
    const double SERVICE_CHARGE = 15;
    const double MONTHLY_FEE = 5;
    const double WITHDRAWAL_FEE = .10;
};





#endif
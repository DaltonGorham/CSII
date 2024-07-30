#include "bankInfo.cpp"
#include "savings.cpp"
#include "checking.cpp"
void testBankAccount();
void testSavingsAccount();
void testCheckingAccount();

int main(){
  // All accounts start off with $100 starting balance.
  int accountType;
  do {
    cout << "1: Checking" << endl;
    cout << "2: Savings" << endl;
    cout << "3: Quit" << endl;
    cin >> accountType;
  } while(accountType != 1 && accountType != 2 && accountType != 3);

  switch(accountType){
    case 1: 
      testCheckingAccount();
      break;
    case 2: 
      testSavingsAccount();
      break;
    case 3:
      break;
  }





  return 0;
}


void testBankAccount(){
  cout << "Bank Account" << endl;
  BankInfo myAccount(100, .03);
  myAccount.depositAmount(400);
  myAccount.withdrawalAmount(120);
  myAccount.monthlyProc();

  cout << myAccount << endl;
}

void testSavingsAccount(){
  double depositAmount;
  double withdrawAmount;
  int totalWithdrawals;
  Savings yourSavings(100,0.03);

  cout << "Enter the amount to deposit into your savings account this month." << endl;
  cin >> depositAmount;
  yourSavings.deposit(depositAmount);
  
  char answer;

  cout << "Did you make any withdrawals this month? (Y/N)" << endl;
  cin >> answer;
  if (answer == 'y' || answer == 'Y'){
    cout << "How many?" << endl;
    cin >> totalWithdrawals;
   for (int i = 0; i < totalWithdrawals; i++){
    cout << "Enter the amount for withdrawal: " << i + 1 << endl;
    cin >> withdrawAmount;
    yourSavings.withdraw(withdrawAmount);
    cout << endl;
   }
  }
  else {
    cout << "No withdrawals made." << endl;
  }

  yourSavings.monthlyProc();
  cout << yourSavings;

}

void testCheckingAccount() {
  double depositAmount;
  double withdrawAmount;
  int totalWithdrawals;
  Checking yourChecking(100, 0.03);

  cout << "Enter the amount to deposit into your checking account this month: ";
  cin >> depositAmount;
  yourChecking.depositAmount(depositAmount);
  char answer;

  cout << "Did you make any withdrawals this month? (Y/N)" << endl;
  cin >> answer;
  if (answer == 'y' || answer == 'Y'){
    cout << "How many?" << endl;
    cin >> totalWithdrawals;
   for (int i = 0; i < totalWithdrawals; i++){
    cout << "Enter the amount for withdrawal: " << i + 1 << endl;
    cin >> withdrawAmount;
    yourChecking.withdraw(withdrawAmount);
    cout << endl;
   }
  }
  else {
    cout << "No withdrawals made." << endl;
  }
  yourChecking.monthlyProc();

  cout << yourChecking;
}
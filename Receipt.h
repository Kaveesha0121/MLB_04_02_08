//IT21268076
//Karunathilaka H.M.C.H
#pragma once
class Receipt
{
private:
  char accountNumber[20];
  char transactionID[20];
  char paymentDate[20];
  double amount;

public:
  void setReceiptDetails(const char saccountNumber[], const char
  stransactionID[], const char spaymentDate[], double samount);
  void viewReceipt();
  void sendReceipt();
};
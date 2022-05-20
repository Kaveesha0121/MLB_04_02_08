//IT21268076
//Karunathilaka H.M.C.H
#pragma once
class Payment
{
private:
  char username[30];
  char email[30];
  int contactNo;
  char accountNumber[20];
  double amount;
  int cardNo;
  char cardexpDate[20];
  int cardsecurityCode;

public:
  Payment();
  void setPaymentDetails(const char pusername[],const char pemail[],int
  pcontactNo, const char paccountNumber[], double pamount, int pcardNo, const char
  pexpDate[], int psecurityCode);
  void displayPayment();
  void validate(int scardNo, const char scardexpDate[], int scardsecurityCode);
  ~Payment();
};

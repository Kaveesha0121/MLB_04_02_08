//IT21268076
//Karunathilaka H.M.C.H
#include "payment.h"
#include<iostream>
#include<cstring>
using namespace std;
Payment::Payment()
{
  strcpy(username,"");
  strcpy(email,"");
  contactNo=0;
  strcpy(accountNumber,"");
  amount=0;
  cardNo=0;
  strcpy(cardexpDate,"");
  cardsecurityCode=0;
}
void Payment::setPaymentDetails(const char pusername[], const char pemail[], int pcontactNo, const char paccountNumber[], double pamount, int pcardNo, const char pexpDate[],int psecurityCode)
{
  strcpy(username, pusername);
  strcpy(email, pemail);
  contactNo = pcontactNo;
  strcpy(accountNumber,paccountNumber);
  amount = pamount;
  cardNo = pcardNo;
  strcpy(cardexpDate, pexpDate);
  cardsecurityCode = psecurityCode;
}
void Payment::displayPayment()
{
  cout << "Account number : " << accountNumber << endl;
  cout << "Paid amount : " << amount << endl;
  cout << "Email : " << email << endl;
}
void Payment::validate(int scardNo, const char scardexpDate[], int
scardsecurityCode)
{
  cardNo = scardNo;
  strcpy(cardexpDate, scardexpDate);
  cardsecurityCode = scardsecurityCode;
}
Payment::~Payment()
{
  cout << "Destructor runs" << endl;
}
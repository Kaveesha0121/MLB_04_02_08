//IT21268076
//Karunathilaka H.M.C.H
#include "Receipt.h"
#include<cstring>
#include<iostream>
using namespace std;
void Receipt::setReceiptDetails(const char saccountNumber[], const char
stransactionID[], const char spaymentDate[], double samount)
{
strcpy(accountNumber, saccountNumber);
strcpy(transactionID, stransactionID);
strcpy(paymentDate, spaymentDate);
amount = samount;
}
void Receipt::viewReceipt()
{
cout << "Account number : " << accountNumber << endl;
cout << "Transaction ID : " << transactionID << endl;
cout << "Payment Date : " << paymentDate << endl;
cout << "Paid amount : " << amount << endl;
cout << "-------------------------------------------" << endl;
cout << "..Thank You.." << endl;
}
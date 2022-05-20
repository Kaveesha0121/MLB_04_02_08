/* IT21358548 */
#include "PastBill.h"
#include<iostream>
using namespace std;

PastBill::PastBill()
{
	cout << "Default Constructor PassBill() called" << endl;
}
PastBill::PastBill(int pAccountNumber, int pBillNumber, char pPastUsage, int pCustomerID, int pPastBillDate, double pPastDiscount, double pPastDeficitMoney, int pPastPaymentDate)
{
	AccountNumber = pAccountNumber;
	BillNumber = pBillNumber;
	PastUsage = pPastUsage;
	CustomerID = pCustomerID;
	PastBillDate = pPastBillDate;
	PastDiscount = pPastDiscount;
	PastDeficitMoney = pPastDeficitMoney;
	PastPaymentDate = pPastPaymentDate;
}
void PastBill::ViewPassBill()
{
}
PastBill::~PastBill() 
{
	cout << "Destructed" << endl;
}
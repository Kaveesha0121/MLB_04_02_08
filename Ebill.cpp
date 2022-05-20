/* IT21268144_J.A.M.P Jayasinghe */
#include "Ebill.h"
#include<cstring>
Ebill::Ebill(){
	CustomerID = 0;
	strcpy(BIllNumber, "");
	strcpy(AccountNumber, "");
	usage = 0;
	strcpy(lastBillDate, "");
	Discount = 0;
	DeficitMoney = 0;
}

void Ebill::EbillDetails(int pCustomerID, const char billnumber[], const char acconuNumber[], float pusage, const char lastbillDate[], float discount, float deficitmoney, const char LastpaymentDate[]){
	CustomerID = pCustomerID;
	strcpy(BIllNumber, billnumber);
	strcpy(AccountNumber, acconuNumber);
	usage = pusage;
	strcpy(lastBillDate, lastbillDate);
	Discount = discount;
	DeficitMoney = deficitmoney;
	strcpy(lastPaymentDate, LastpaymentDate);
}

void Ebill::ViewDetails(){
}

void Ebill::CalculateDiscount(){
}

void Ebill::CalculateUsage(){
}

Ebill::~Ebill(){
	cout << "Destructor runs" << endl;
}
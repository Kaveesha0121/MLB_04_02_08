/* IT21268144_J.A.M.P Jayasinghe */
#include "NewUser.h"
#include<cstring>
using namespace std;

NewUser::NewUser(){
	strcpy(name, "");
	CustomerID = 0;
	strcpy(NIC, "");
  strcpy(Email, "");
	strcpy(PhoneNumber, "");
	strcpy(AccountNumber, "");
	strcpy(Password, "");
}

void NewUser::setUserDetails(const char pname[], int customerid, char nic[], const char email[20], const char phonenumber[10], const char accountNumber[], const char password[10]){
	strcpy(name, pname);
	CustomerID = customerid;
	strcpy(NIC, nic);
	strcpy(Email,email);
	strcpy(PhoneNumber, phonenumber);
	strcpy(AccountNumber, accountNumber);
	strcpy(Password, password);
}

void NewUser::viewUserDetails()
{
}

NewUser::~NewUser()
{
	cout << "Destructor runs" << endl;
}

//IT21268076
//Karunathilaka H.M.C.H
#include "Contact.h"
#include<cstring>
#include<iostream>
using namespace std;
Contact::Contact()
{
  strcpy(customerID, "");
  strcpy(email, "");
}
void Contact::setContactDetails(const char pcustomerID[], const char pemail[])
{
  strcpy(customerID, pcustomerID);
  strcpy(email, pemail);
}
Contact::~Contact()
{
cout << "Destructor runs" << endl;
}
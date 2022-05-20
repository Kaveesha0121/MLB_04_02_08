/* IT21268144_J.A.M.P Jayasinghe */
#include "Complaints.h"
#include<cstring>

Complaints::Complaints()
{
	CustomerID = 0;
	strcpy(complaint, "");
}

void Complaints::setComplaintDetails(int pCustomerID, const char pComplaint[])
{
	CustomerID = pCustomerID;
	strcpy(complaint, pComplaint);
}

void Complaints::DisplayComplaintDestail()
{
}

Complaints::~Complaints()
{
	cout << "Destructor runs" << endl;
}

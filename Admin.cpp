/* IT21356186 */
#include "Admin.h"
#include<iostream>
using namespace std;


Admin::Admin()
{
	cout << "Default constructor  Admin()" << endl;
}

Admin::Admin(string BillNumber, float pUsage)
{

	billNumber = BillNumber;
	usage = pUsage;
}
void Admin::CalculatePrice()
{

}

Admin::~Admin()
{
	cout << "Destructed" << endl;
}
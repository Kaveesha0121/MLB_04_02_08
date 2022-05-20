/* IT21358548 */
class PastBill
{
private:
	int AccountNumber;
	int BillNumber;
	char PastUsage;
	int CustomerID;
	int PastBillDate;
	double PastDiscount;
	double PastDeficitMoney;
	int PastPaymentDate;
public:
	PastBill();
	PastBill(int pAccountNumber, int pBillNumber, char pPastUsage, int pCustomerID, int pPastBillDate, double pPastDiscount, double pPastDeficitMoney, int pPastPaymentDate);
	void ViewPassBill();
	~PastBill();
};

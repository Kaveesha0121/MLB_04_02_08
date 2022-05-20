/* IT21356186 */
#include<string>
using namespace std;

class Admin
{
private:

	string billNumber;
	float usage;
	
public:
	Admin();
	Admin(string BillNumber, float pUsage);
	void CalculatePrice();
	
	~Admin();
};

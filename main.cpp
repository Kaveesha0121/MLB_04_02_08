#include <iostream>
#include <string>
#include "Admin.h"
#include "Complaints.h"
#include "Ebill.h"
#include "NewUser.h"
#include "PastBill.h"
#include "payment.h"
#include "Receipt.h"
#include "RegisterdUser.h"
#include "Reminder.h"
#include "Contact.h"

int main(){
  
/* IT21358548 */
	RegisteredUser *registerUser1=new RegisteredUser; 
	RegisteredUser *registerUser2=new RegisteredUser;
  PastBill *PB1=new PastBill;
  PastBill *PB2=new PastBill;

  delete registerUser1;
  delete registerUser1;
  delete PB1;
  delete PB2;

  /* IT21356186 */
  Admin *admin1=new Admin;
	Admin *admin2=new Admin;

	delete admin1;
  delete admin2;
  
  /* IT21267468 */
  Reminder *re1 =new Reminder();
  Reminder *re2 =new Reminder();
  delete re1;
  delete re2;

  /* IT21268067 */
  Payment* pay1 = new Payment();
  Payment* pay2 = new Payment();
  Receipt* rep1 = new Receipt();
  Receipt* rep2 = new Receipt();
  Contact* c1 = new Contact();
  Contact* c2 = new Contact();
  delete pay1;
  delete pay2;
  delete rep1;
  delete rep2;
  delete c1;
  delete c2;

  /* IT21268144 */
  NewUser* u1 = new NewUser();
  NewUser* u2 = new NewUser();
  Ebill* bill1 = new Ebill();
  Ebill* bill2 = new Ebill();
  Complaints* com1 = new Complaints();
  Complaints* com2 = new Complaints();
  delete u1;
  delete u2;
  delete bill1;
  delete bill2;
  delete com1;
  delete com2;
  
	return 0;
}

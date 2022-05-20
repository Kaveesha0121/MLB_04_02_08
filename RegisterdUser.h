
/* IT21268076 */
#pragma once
#include<string>
using namespace std;

class RegisteredUser
{
private:

	string email;
	string password;
public:
	RegisteredUser();
	RegisteredUser(string pemail, string ppassword);
	void login();
	void Bill();
	void Reminder();
	void Payment();
	void display();
	~RegisteredUser();
};





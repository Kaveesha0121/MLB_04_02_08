
/* IT21268076 */
#include "RegisterdUser.h"
#include<iostream>
using namespace std;


RegisteredUser::RegisteredUser(){
	cout << "Default constructor of register custmer" << endl;
}

RegisteredUser::RegisteredUser(string pemail, string ppassword){
	email = pemail;
	password = ppassword;
}

void RegisteredUser::login(){
}

void RegisteredUser::Bill(){
}

void RegisteredUser::Reminder(){
}

void RegisteredUser::Payment(){
}



void RegisteredUser::display(){

	cout << "Register Customer Email :" << email << endl;
	cout << "Register Customer Password :" << password << endl;
	cout << endl;
}


RegisteredUser::~RegisteredUser(){
	cout << "Destructed" << endl;
}

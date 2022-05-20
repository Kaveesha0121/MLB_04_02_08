/* IT21267468*/
#include"Reminder.h"
#include <iostream>
#include <cstring>
using namespace std;

Reminder::Reminder(){
	userID=0;
	strcpy(ReminderTopic,"");
	strcpy(AboutReminder,"");
}

char Reminder::SendReminder(int userID, char Topic[], char About[]){
	cout << "CustomerID :"<<userID<<endl;
  cout << "Topic :" << Topic << endl;
	cout << "About:" << About << endl;
	cout << endl;
}
/*IT21267468*/
class Reminder
{
private:
  int userID;
  char ReminderTopic[50];
  char AboutReminder[1000];

public:
  Reminder();
  Reminder(int userID, char Topic[], char About[]);
  char SendReminder(int userID, char Topic[], char About[]);
  ~ Reminder ();
};
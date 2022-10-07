
#include "Hack.h"

using namespace std;

/** feel free to add more functions if needed
You can call your recursion functions here to
hack Guest, Dave, Dr. Evil, Ms. Chief, and Mr Mean
*/
void hack(EvilComputer* ec){
	//user-specific strings
	hackGuest(ec, "");
	hackDave(ec, "");
	hackMrMean(ec, "");
	hackMsChief(ec, "");
	hackDrEvil(ec, "");
}

void hackGuest(EvilComputer* ec, string pswd) {
	pswd = "passw123";
	ec->guess("Guest", pswd);
	return;
}

void hackDave(EvilComputer* ec, string pswd) {
//Dave's password consists of exactly 4 digits
	
	ec->guess("Dave", pswd);
	if (ec->is_hacked("Dave"))
		return;
	else if (pswd.size() == 4)
		return;
	else
	{
		for (char i = '0'; i <= '9'; i++)
		{
			hackDave(ec, pswd + i);
		}
	}
}


void hackMrMean(EvilComputer* ec, string pswd) {
//Mr. Mean's password consists of only the characters 'g' and 'f'
	ec->guess("Mr. Mean", pswd);
	if (ec->is_hacked("Mr. Mean"))
		return;
	else if (pswd.size() == 8)
		return;
	else
	{
		for (char i = 'f'; i <= 'g'; i++)
		{
			hackMrMean(ec, i + pswd);
		}
	}
}

void hackMsChief(EvilComputer* ec, string pswd) {
//Ms. Chief's password starts with "haha"
	ec->guess("Ms. Chief", "haha" + pswd);
	if (ec->is_hacked("Ms. Chief"))
		return;
	else if (pswd.size() == 4)
		return;
	else
	{
		for (char i = '0'; i <= 'z'; i++)
		{
			if (i == 58)
			{
				i = 'a';
			}
			if (ec->is_hacked("Ms. Chief"))
				break;
			hackMsChief(ec, pswd + i);
		}
	}
}

void hackDrEvil(EvilComputer* ec, string pswd) {
//Dr. Evil's password starts or ends with the string "gato"
	ec->guess("Dr. Evil", pswd + "gato");
	ec->guess("Dr. Evil", "gato" + pswd);
	if (ec->is_hacked("Dr. Evil"))
		return;
	else if (pswd.size() == 4)
		return;
	else
	{
		for (char i = '0'; i <= 'z'; i++)
		{
			if (i == 58)
			{
				i = 'a';
			}
			if (ec->is_hacked("Dr. Evil"))
				break;
			hackDrEvil(ec, pswd + i);
		}
	}
}



/* You should define your recursion functions here to hack each user
You can have one function for all users, or have different functions for each user

Hint: However you design your recursion function, pass EvilComputer* ec as one of the input as well
so that you can check if the string that you generating is the password for the user.
For example:

(*ec).guess("Guest", "passw123"); is going to check if the password of the guest is passw123
and if it is correct, mark guest as hacked

(*ec).is_hacked("Dave") is returning boolean if you want to check Dave is hacked or not.
Do you think that would be a good method for one of the base cases in recursion? :D

*/

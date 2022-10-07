
#include "evilcomputer.h"

/** feel free to add more functions if needed
You can call your recursion functions here to
hack Guest, Dave, Dr. Evil, Ms. Chief, and Mr Mean
*/
void hack(EvilComputer* ec);

void hackGuest(EvilComputer* ec, string p);

void hackDave(EvilComputer* ec, string p);

void hackMrMean(EvilComputer* ec, string p);

void hackMsChief(EvilComputer* ec, string p);

void hackDrEvil(EvilComputer* ec, string p);


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

#pragma once

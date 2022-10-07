
#include <iostream>
#include <string>
#include <cstdlib>
#include "evilcomputer.h"
#include "hack.h"

using namespace std;

//This section is the test part, just ignore it.

inline void _test(const char* expression, const char* file, int line)
{
        cerr << "test(" << expression << ") failed in file " << file;
	cerr << ", line " << line << "." << endl;
        abort();
}

#define test(EXPRESSION) ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))



int main()
{
	srand(2017); // Initialize random number generation


	// Create five computers with specific passwords
	EvilComputer ec1("1234", "gfff", "haha0", "gato1");
	EvilComputer ec2("1235", "gggfff", "haha456", "gato123");
	EvilComputer ec3("2345", "gf", "haha0abc", "123gato");
	EvilComputer ec4("6789", "gfggfffg", "hahaz123", "abc9gato");
	EvilComputer ec5("9999", "ffffffff", "hahahaha", "gatogato");

	// Try to hack each of the five computers
	hack(&ec1);
	cout << "First hack Done" << endl;
	hack(&ec2);
	cout << "Second hack Done" << endl;
	hack(&ec3);
	cout << "Third hack Done" << endl;
	hack(&ec4);
	cout << "Fourth hack Done" << endl;
	hack(&ec5);
	cout << "Fifth hack Done" << endl;

	// Test that Guest's account is always hacked
	if (ec1.is_hacked("Guest"))
		cout << "EvilComputer1 - Guest is hacked.";
	else
		cout << "NOOOOOO; EvilComputer1 - Guest is NOT hacked.";
	if (ec2.is_hacked("Guest"))
		cout << "EvilComputer2 - Guest is hacked.";
	else
		cout << "NOOOOOO; EvilComputer2 - Guest is NOT hacked.";
	if (ec3.is_hacked("Guest"))
		cout << "EvilComputer3 - Guest is hacked.";
	else
		cout << "NOOOOOO; EvilComputer3 - Guest is NOT hacked.";
	if (ec4.is_hacked("Guest"))
		cout << "EvilComputer4 - Guest is hacked.";
	else
		cout << "NOOOOOO; EvilComputer4 - Guest is NOT hacked.";
	if (ec5.is_hacked("Guest"))
		cout << "EvilComputer5 - Guest is hacked.";
	else
		cout << "NOOOOOO; EvilComputer5 - Guest is NOT hacked.";


	// Test that Dave's account is always hacked
	if (ec1.is_hacked("Dave"))
		cout << "EvilComputer1 - Dave is hacked." << endl;
	else
		cout << "NOOOOOO; EvilComputer1 - Dave is NOT hacked." << endl;
	if (ec2.is_hacked("Dave"))
		cout << "EvilComputer2 - Dave is hacked." << endl;
	else
		cout << "NOOOOOO; EvilComputer2 - Dave is NOT hacked." << endl;
	if (ec3.is_hacked("Dave"))
		cout << "EvilComputer3 - Dave is hacked." << endl;
	else
		cout << "NOOOOOO; EvilComputer3 - Dave is NOT hacked." << endl;
	if (ec4.is_hacked("Dave"))
		cout << "EvilComputer4 - Dave is hacked." << endl;
	else
		cout << "NOOOOOO; EvilComputer4 - Guest is NOT hacked." << endl;
	if (ec5.is_hacked("Dave"))
		cout << "EvilComputer5 - Dave is hacked." << endl;
	else
		cout << "NOOOOOO; EvilComputer5 - Dave is NOT hacked." << endl;


	// Test that Mr. Mean's account was always hacked
	if (ec1.is_hacked("Mr. Mean"))
		cout << "EvilComputer1 - Mr. Mean is hacked." << endl;
	else
		cout << "NOOOOOO; EvilComputer1 - Mr. Mean is NOT hacked." << endl;
	if (ec2.is_hacked("Mr. Mean"))
		cout << "EvilComputer2 - Mr. Mean is hacked." << endl;
	else
		cout << "NOOOOOO; EvilComputer2 - Mr. Mean is NOT hacked." << endl;
	if (ec3.is_hacked("Mr. Mean"))
		cout << "EvilComputer3 - Mr. Mean is hacked." << endl;
	else
		cout << "NOOOOOO; EvilComputer3 - Mr. Mean is NOT hacked." << endl;
	if (ec4.is_hacked("Mr. Mean"))
		cout << "EvilComputer4 - Mr. Mean is hacked." << endl;
	else
		cout << "NOOOOOO; EvilComputer4 - Mr. Mean is NOT hacked." << endl;
	if (ec5.is_hacked("Mr. Mean"))
		cout << "EvilComputer5 - Mr. Mean is hacked." << endl;
	else
		cout << "NOOOOOO; EvilComputer5 - Mr. Mean is NOT hacked." << endl;

	// Test that Ms. Chief's account was always hacked
	if (ec1.is_hacked("Ms. Chief"))
		cout << "EvilComputer1 - Ms. Chief is hacked." << endl;
	else
		cout << "NOOOOOO; EvilComputer1 - Ms. Chief is NOT hacked.";
	if (ec2.is_hacked("Ms. Chief"))
		cout << "EvilComputer2 - Ms. Chief is hacked." << endl;
	else
		cout << "NOOOOOO; EvilComputer2 - Ms. Chief is NOT hacked." << endl;
	if (ec3.is_hacked("Ms. Chief"))
		cout << "EvilComputer3 - Ms. Chief is hacked." << endl;
	else
		cout << "NOOOOOO; EvilComputer3 - Ms. Chief is NOT hacked." << endl;
	if (ec4.is_hacked("Ms. Chief"))
		cout << "EvilComputer4 - Ms. Chief is hacked." << endl;
	else
		cout << "NOOOOOO; EvilComputer4 - Ms. Chief is NOT hacked." << endl;
	if (ec5.is_hacked("Ms. Chief"))
		cout << "EvilComputer5 - Ms. Chief is hacked." << endl;
	else
		cout << "NOOOOOO; EvilComputer5 - Ms. Chief is NOT hacked." << endl;


	// Test that Dr. Evil's account was always hacked
	if (ec1.is_hacked("Dr. Evil"))
		cout << "EvilComputer1 - Dr. Evil is hacked." << endl;
	else
		cout << "NOOOOOO; EvilComputer1 - Dr. Evil is NOT hacked." << endl;
	if (ec2.is_hacked("Guest"))
		cout << "EvilComputer2 - Dr. Evil is hacked." << endl;
	else
		cout << "NOOOOOO; EvilComputer2 - Dr. Evil is NOT hacked." << endl;
	if (ec3.is_hacked("Dr. Evil"))
		cout << "EvilComputer3 - Dr. Evil is hacked." << endl;
	else
		cout << "NOOOOOO; EvilComputer3 - Dr. Evil is NOT hacked." << endl;
	if (ec4.is_hacked("Dr. Evil"))
		cout << "EvilComputer4 - Dr. Evil is hacked." << endl;
	else
		cout << "NOOOOOO; EvilComputer4 - Dr. Evil is NOT hacked." << endl;
	if (ec5.is_hacked("Dr. Evil"))
		cout << "EvilComputer5 - Dr. Evil is hacked." << endl;
	else
		cout << "NOOOOOO; EvilComputer5 - Dr. Evil is NOT hacked." << endl;

	cout << "Your program is going to be tested for rankdom passwords" << endl;

	// Test hacking some "randomly" chosen passwords
	for (int i = 0; i < 10; ++i)
	{
		// Try to hack all three users with randomly chosen passwords
		// (matching each user's password rules)
		EvilComputer ec;
		hack(&ec);

		test(ec.is_hacked("Guest"));
		test(ec.is_hacked("Dave"));
		test(ec.is_hacked("Mr. Mean"));
		test(ec.is_hacked("Ms. Chief"));
		test(ec.is_hacked("Dr. Evil"));
	}


	cout << "Assignment complete." << endl;
}



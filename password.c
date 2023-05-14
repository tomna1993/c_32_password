#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

bool checkPass(string word);

int main(void)
{
	// Get the password from user
	string password = get_string("Enter your password: ");

	// Evaluate the password
	bool isPassCorrect = checkPass(password);

	// Print information to user
	if (isPassCorrect)
	{
		printf("Your password is valid!");
		return 0;
	}
	else
	{
		printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol!");
		return 1;
	}
}

bool checkPass(string word)
{
	return false;
}
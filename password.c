#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

bool checkPass(string word, const char disablesCharArray[]);

int main(void)
{
	// Array of not accepted characters, the last element of the array always should be a nul character (\0)
	// The length of the array can be found by iterating through the array until reach the nul character (\0)
	const char notAcceptedChars[] = {'#', '{', '}', '/', '~', '!', '$', '\0'};

	// Get the password from user
	string password = get_string("Enter your password: ");

	// Evaluate the password
	bool isPassCorrect = checkPass(password, notAcceptedChars);

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

bool checkPass(string word, const char disablesCharArray[])
{
	return false;
}
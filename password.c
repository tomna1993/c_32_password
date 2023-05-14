#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool checkPass(string word, const string disablesCharArray);

int main(void)
{
	// Array of not accepted characters, the last element of the array always should be a nul character (\0)
	// The length of the array can be found by iterating through the array until reach the nul character (\0)
	const string notAcceptedChars = "#{}/~!$";


	// Get the password from user
	string password = get_string("Enter your password: ");

	// Evaluate the password
	bool isPassCorrect = checkPass(password, notAcceptedChars);

	// Print information to user
	if (isPassCorrect)
	{
		printf("Your password is valid!\n");
		return 0;
	}
	else
	{
		printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol!\n");
		return 1;
	}
}

bool checkPass(string word, const string disablesCharArray)
{
	bool lowerChar = false;
	bool upperChar = false;
	bool isNumber = false;

	int notAcceptedCharLength = strlen(disablesCharArray);

	for(int i = 0, length = strlen(word); i < length; i++)
	{
		for(int j = 0; j < notAcceptedCharLength; j++)
		{
			if(word[i] == disablesCharArray[j])
			{
				printf("There is an invalid character in your password!\n");
				return false;
			}
		}

		if(islower(word[i]) && lowerChar == false)
		{
			lowerChar = true;
		}
		else if(isupper(word[i]) && upperChar == false)
		{
			upperChar = true;
		}
		else if(isalnum(word[i]) && isNumber == false)
		{
			isNumber = true;
		}
	}

	return lowerChar && upperChar && isNumber;
}
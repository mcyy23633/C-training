// Please write a program that allows the user to input a binary string within 10 characters, convert it into decimal and output it.
#include <stdio.h>
#include <string.h>

int main()
{
	char binary[11]; // Binary string used to store user input, including termination symbol
	int decimal = 0; // used to store decimal results
	int i=0;
	printf("Please enter a binary string within 10 characters: ");
	scanf("%s", binary);
// Check whether the input binary string is valid
	int length = strlen(binary);
	for ( i = 0; i < length; i++)
	{
		if (binary[i] != '0' && binary[i] != '1')
		{
			printf("Invalid input! Please enter a valid binary string.\n");
			return 1; //Exit the program and return error code
		}
	}

	//Convert binary string to decimal
	for (i = 0; i < length; i++)
	{
		decimal <<= 1; // Shift one bit to the left, which is equivalent to multiplying by 2
		decimal |= (binary[i] - '0'); // Convert the current character to an integer and add to the decimal result
	}

	printf("The decimal result is: %d\n", decimal);

	return 0;
}

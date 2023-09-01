#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there are invalid characters in b.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = (result << 1) | (b[i] - '0');
	}

	return (result);
}
int main(void)
{
	const char *binary_str = "1100101";
	unsigned int result = binary_to_uint(binary_str);

	if (result == 0 && binary_str != NULL)
	{
		printf("Invalid binary string\n");
	}
	else
	{
		printf("Converted value: %u\n", result);
	}

	return (0);
}

#include "main.h"

/**
 * _isalpha -Checks for alphabetic character
 * @c: The character to be checked
 * Return: Always 0.
 */

int _isalpha(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

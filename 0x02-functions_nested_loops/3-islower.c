#include "main.h"

/**
 * _islower - check if char is in lowercase
 * @c: is the character to be checked
 * Return: 1 if character is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return  (0);
}

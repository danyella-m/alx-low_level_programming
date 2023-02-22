#include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: is the character to be checked
 * Return: 1 for alphabetic characteer or 0 for anything else
 */

int _isalpha(int c)
{	
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	return (0);
}

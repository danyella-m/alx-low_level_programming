#include "main.h"

/**
 * _isalpha - check for alphabetic character
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

#include "main.h"

/**
 * _isalpha - function name
 * @c: grts digit
 * Return: 1 0r 0
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}

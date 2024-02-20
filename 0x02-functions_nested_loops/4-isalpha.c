#include "main.h"

/**
 * _isalpha - chacks if character is an ASCII alphabet
 * @c: parameter to be checked
 *
 * Return: 1(if c is alphabet) else 0(not an alphabet)
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

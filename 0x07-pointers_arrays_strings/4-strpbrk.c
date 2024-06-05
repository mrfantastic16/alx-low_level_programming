/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: String to search
 * @accept: Set of bytes to serach for
 *
 * Return: Pointer to the byte in `s` that matches one of the bytes
 * `accept`, or NULL if no such byte in found
 *
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		p = accept;
		while (*p)
		{
			if (*s == *p)
				return (s);
			p++;
		}
		s++;
	}

	return ('\0');
}

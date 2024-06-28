/**
 * _strspn - search the number of bytes in the intial
 * segment of s which consist of bytes from accept
 *
 * @s: sergment targeted
 * @accept reference byte container
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte = 0;
	int i;

	while (*s)
	{

		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				byte++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (byte);
		}
		s++;
	}
	return (byte)
}

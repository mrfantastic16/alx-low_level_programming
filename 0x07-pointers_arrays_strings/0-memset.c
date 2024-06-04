/**
 * _memset - fills a memory with a constant byte
 * @s: string or memory to be filled
 * @b: character to be inserted into the memory
 * @n: amount of b to be inserted and @s to be replaced
 *
 * Return: @s, the buffer being filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

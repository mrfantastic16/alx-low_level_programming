/**
 * _strcmp - compares two strings
 * @s1: First string for comparison
 * @s2: Second string fro comparison
 *
 * Description: This function takes two strings and compare it
 * lexicographically.
 *
 * Return: Difference of ASCII values
 */


int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s1 - *s2);
	}
	return (0);
}

/**
 * _strncpy - copies n number of string from src to dest
 * @dest: destinatination of copied string
 * @src: source of copied string
 * @n: n chars of string to be copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

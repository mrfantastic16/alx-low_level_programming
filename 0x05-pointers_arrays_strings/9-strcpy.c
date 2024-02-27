/**
 * _strcpy - copies a string from second arg to first arg
 * @dest: destination of copied string
 * @src: source, where the string would be copied from
 *
 * Return: @dest: destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

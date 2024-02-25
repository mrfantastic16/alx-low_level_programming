/**
 * swap_int - swaps the value of its two parameters
 * @a: pointer to the first value to be swaped
 * @b: pointer to the second value to be swaped
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}

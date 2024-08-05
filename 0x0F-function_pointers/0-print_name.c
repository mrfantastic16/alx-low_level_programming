/**
 * print_name - using a function pointer(callback) that prints
 * some string to print the string
 * @name: string/name to be printed
 * @f: callback function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

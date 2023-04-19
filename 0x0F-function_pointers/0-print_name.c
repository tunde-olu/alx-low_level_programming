/**
 * print_name - A function that prints a name
 * @name: name to print
 * @f: callback function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

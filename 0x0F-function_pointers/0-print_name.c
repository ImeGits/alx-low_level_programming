#include <stdio.h>
#include <stddef.h>
/**
 * print_name -> a function that prints a name
 *
 * @name: parameter 1
 * @f: parameter function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		if (name != NULL)
		{
			(*f)(name);
		}
	}
}

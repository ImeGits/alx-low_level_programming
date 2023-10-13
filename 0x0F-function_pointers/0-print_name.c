#include "function_pointers.h"

/** print_name - a function that prints name.
 * @name: parameter 1.
 * @f: parameter function.
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

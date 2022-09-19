#include"main.h"



/**
 *
 *  * _puts - prints a string, followed by a newline to stdout
 *
 *   *
 *
 *    * @str: string parameter to print
 *
 *     *
 *
 *      * Return: Nothing
 *
 *      */


{
	int i;

	i = 0;
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;

	}
	_putchar('\n');

}

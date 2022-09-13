#include "main.h"
/**
 * print_alphabet - print alphabet lowercase
 * *
 * Return: Always 0.
 */



void print_alphabet(void)
{
	char x;
	
	for(x = 'a' ; x <= 'z' ; x++)
	{
		x=tolower (x);
		putchar(x)
	}

	return (0) ;
}

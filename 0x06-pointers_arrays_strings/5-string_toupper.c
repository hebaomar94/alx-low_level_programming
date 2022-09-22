#include "main.h"

/**
 *
 *  * string_toupper - changes all lowercase letters of a string to uppercase
 *
 *   * @str: string
 *
 *    * Return: returns char
 *
 *     */


int j = 0;

    char str[] = "geekforgeeks\n";

        char ch;

	 

	    while (str[j]) {

		            ch = str[j];

			            putchar(toupper(ch));

				            j++;

					        }

 

    return 0;

    }

#include <stdio.h>
#include <stdlib.h>



/**
 *
 *  * main - adds positive numbers
 *
 *   * @argc: number of arguments
 *
 *    * @argv: array containing arguments passed to the program
 *
 *     *
 *
 *      * Return: 0 if no number is passed as argument
 *
 *       * 	   1 and prints Error if one number contains a symbol
 *
 *        */



int main(int argc, char *argv[])

{

		int i, sum = 0;



			if (argc == 1)

					{

								printf("0\n");

									}

				else

						{

									for (i = 1; i < argc; i++)

												{

																if ((argv[i] < '0' || *argv[i] > '9'))

																				{

																									printf("Error\n");

																													return (1);

																																}

																			else

																							{

																												sum += atoi(argv[i]);

																															}

																					}

											printf("%d\n", sum);

												}

					return (0);

}

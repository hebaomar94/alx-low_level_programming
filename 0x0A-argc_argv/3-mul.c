#include <stdio.h>
#include <stdlib.h>



/**
 * main - multiplies 2 numbers
 * @argc: number of arguments
 * @argv: array containing arguments passed to the program
 * Return: 1 if program does not receive 2 arguments
 */



int main(int argc, char *argv[])
{

		int product = 0;
		
		if (argc <= 2)

		{

		printf("Error\n");

		return (1);
											         }
		else 

		{

	product = atoi(argv[1]) * atoi(argv[2]);
											printf("%d\n", product);

												}

	 	return (0);

}

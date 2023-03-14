#include <stdio.h>
#include "main.h"

/**
 * main - prints the program name
 * @argc: count arguements
 * @argv: arguements
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count = 0;

	if (argc > 0)
	{
		/*While - print each arguements*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}

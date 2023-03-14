#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: count arguements
 * @argv: arguements
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}

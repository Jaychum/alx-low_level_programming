#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there digit
 * @str: array str
 *
 * Return:0
 */

int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;

	while (count < strlen(str)) /*count strinng*/
	{
		if (!isdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - prints the name of program
 * @argc: arguement count
 * @argv: arguements
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/

	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*Goes through the whole arry*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
			sum += str_to_int;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum); /*print sum*/
	return (0);
}

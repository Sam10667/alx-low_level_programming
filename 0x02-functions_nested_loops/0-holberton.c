#include <stdio.h>
#include "main.h"

/**
 * main - program that prints Holberton followed by a new line
 * Return: 0
 */

int main(void)
{
	char palabra[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8 ; i++)
	{
		_putchar(palabra[i]);
	}
	_putchar('\n');
	return (0);
}

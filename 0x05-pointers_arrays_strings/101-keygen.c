#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* main - entry point; program that generates random valid value
* passwords for the program 101-crackme
* Return: generated password
*/

int main(void)
{
	char c;
	int x;

	srand(time(0));
	while (x <= 2645)
	{
		c = rand() % 128;
		x += c;
		putchar(c);
	}
	putchar(2772 - x);

	return (0);
}

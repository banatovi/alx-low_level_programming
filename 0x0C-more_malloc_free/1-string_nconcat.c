#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings, takes the first n chars of s2
 * @s1: string 1
 * @s2: string 2
 * @n: amount of chars to be used from s2
 * Return: pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b;
	char *newString;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}
	if (n > b)
		n = b;
	newString = malloc(((a + n) + 1));
	if (newString == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
	{
		newString[a] = s1[a];
	}
	for (b = 0; b != n; b++)
	{
		newString[a] = s2[b];
		a++;
	}
	newString[a] = '\0';
	return (newString);
}

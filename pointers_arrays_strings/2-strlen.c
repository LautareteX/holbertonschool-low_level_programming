#include "main.h"
#include <stdio.h>

/**
* _strlen - set
* @*s: var s
* @s: var cjari
* Return: always the size
*/

int _strlen(char *s)
{
	int patric = 0;

	while (*s != '\0')
	{
		s++;
		patric++;
	}
	return (patric);
}

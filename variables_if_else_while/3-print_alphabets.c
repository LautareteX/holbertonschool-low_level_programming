#include<stdio.h>

/**
* main - aBC
* Return: always 0
*/

int main(void)
{
	char abc = 'a';
	char ABC = 'A';

	for (abc = 'a'; abc <= 'z'; abc++)
	putchar(abc);
for (ABC = 'A'; ABC <= 'Z'; ABC++)
	putchar(ABC);

putchar('\n');

	return (0);
}

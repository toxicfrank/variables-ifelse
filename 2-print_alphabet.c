#include <stdio.h>

/**
 * main - prints alphabet in lower case
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	printf("\n");
	return (0);
}

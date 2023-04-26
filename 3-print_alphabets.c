#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: always 0
 */

int main(void)
{
	int i;
	int k;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (k = 'A'; k <= 'Z'; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}

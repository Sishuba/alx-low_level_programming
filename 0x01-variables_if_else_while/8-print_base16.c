#include <stdio.h>
/**
 * main - rints all the numbers of base 16 in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar((a % 10) + '0');
	}
	for (alph = 'a'; alph < 'g'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}

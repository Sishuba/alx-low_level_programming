#include "main.h"
/**
 * main - prints the alphabet in lower case
 * Return: void
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}

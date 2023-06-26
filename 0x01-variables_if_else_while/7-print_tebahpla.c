#include <stdio.h>
/**
 * main - prints the alphabet in lower case in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i = 0;

	while (i < 26)
	{
		putchar(alph[i]);
		i++;
	}
	putchar('\n');
	return (0);
}

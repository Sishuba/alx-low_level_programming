#include <stdio.h>
/**
 * main - prints letters of the alphabet in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		putchar(a[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
